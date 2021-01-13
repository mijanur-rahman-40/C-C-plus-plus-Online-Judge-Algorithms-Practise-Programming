#include<stdio.h>
void printMaxActivities(int s[], int f[], int n)
{
    int i, j;

    printf ("Following activities are selected n");
    i = 0;
    printf("%d ", i);
    for (j = 1; j < n; j++)
    {
      if (s[j] >= f[i])
      {
          printf ("%d ", j);
          i = j;
      }
    }
}
int main()
{
    int s[] =  {1, 3, 0, 5, 8, 5};
    int f[] =  {2, 4, 6, 7, 9, 9};
    int n = sizeof(s)/sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}





#include<bits/stdc++.h>
using namespace std;

struct activity
{
    int s,e,v;
};

int weightedActivity(int n, vector<activity> &a)
{
    if(n==1)
        return a[0].v;

    vector<int> dp(n);
    dp[0]=a[0].v;
    int x,y,i,j;

    for(i=1;i<n;i++)
    {
        x=a[i].v;

        j=i-1;
        while(j>=0 && a[i].s<=a[j].e)
        {
            j--;
        }

        y=0;
        if(j!=-1)
            y=a[j].v;

        dp[i]=max(x+y,dp[i-1]);
    }

    return dp[n-1];
}

int main()
{
    int i,n;
    cout<<"Enter the number of activities ";
    cin>>n;

    cout<<"Enter the start time, end time and value of each activity "<<endl;

    vector<activity> a(n);

    for(i=0;i<n;i++)
    {
        cin>>a[i].s>>a[i].e>>a[i].v;
    }

    cout<<"The maximum attainable value of activities is"<<endl;
    cout<<weightedActivity(n,a);

    cout<<endl;
    return 0;
}


1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
#include <cstdio>
#include <algorithm>
using namespace std;

pair< int, int > a[100000];

//a[].first denotes the finish time
//a[].second denotes the starting time

int main()
{
int i, n, last;

//n denotes the number of activities

scanf("%d", &n);

for(i = 0; i < n; i++)
{
scanf("%d %d",&a[i].second,&a[i].first);
}
//using sort function for an array of pairs sorts
// it according to the first one.
//sorting according to finish time
sort(a, a + n);

last = -1;//initialization
for(i = 0; i < n; i++)
{
if(a[i].second>= last) //step 3
{
//printing the activity number which is selected
printf("%d ",i);
last = a[i].first;
}
}

return 0;
}
