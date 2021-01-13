
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100000],n;
    cin>>n;
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    //sort(arr,arr+n);
    int count1=0,count2=0,count3=0,count4=0;
    for(int i=0;i< n;i++){
            if(arr[i]==1){
        count1++;
    }
    if(arr[i]==2){
         count2++;
}
    if(arr[i]==3){
        count3++;
   }
        if(arr[i]==4){
         count4++;
      }
    }
    int g,h;
    if(count3>count1) {
        count4=count4+count3;
        g=-1;
    }
    if(count1>=count3) {
        count4=count4+count3;
        g=count1-count3;
    }
    h=(2*count2)%4;
    if(h==0){
    count4=count4+(count2/2);
    }
    else{
            count4=count4+((count2+1)/2);
    }
    if(g!=-1){
        g=g-h;
        count4=count4+g;
    }
    cout<<count4<<endl;
    return 0;
}
/*
#include<iostream>
using namespace std;
int n,a[100000],i,b,c,d,e,f,g,h;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b=0;
    c=0;
    d=0;
    e=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1) //To check for number of 1,2,3 and 4 membered groups.
        b=b+1;
        if(a[i]==2)
        c=c+1;
        if(a[i]==3)
        d=d+1;
        if(a[i]==4)
        e=e+1;
    }
    f=e;
    if(d>b) //More 3 member groups than 1.
    {
        f=f+d; //f=f+b+(g-b) 3 and 1 member groups combine.Remaining 3 i.e. (g-b) member groups will can't combine with 2 member groups.Hence,they take separate taxies.
        g=-1;
    }
    if(b>=d) //More 1 member groups than 3.
    {
        f=f+d;
        g=b-d; //g=remaining 1 member groups.
    }
    h=(2*c)%4; //Empty seats in last taxi.Possible values can be 0,1,2,3.
    if(h==0)
    f=f+(c/2);
    else
    {
        f=f+((c+1)/2);
    }
    if(g!=-1)
    {
        g=g-h; //Remaining 1 member groups after combining with remaining seats in last 2 member taxi.
        f=f+g;
    }
    cout<<f;
}










































/*
#include <iostream>
#include<stdlib.h>
using namespace std;
int cmp(const void *a,const void *b)
{
    return *(int *)b-*(int *)a;
}
int a[100010];
int main()
{
    int n,i,ans,s,k;
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ans=0;
        qsort(a,n,sizeof(a[0]),cmp);
        for(i=0,s=n-1; i<n; i++)
        {
            if(a[i]==0)
                continue;
            if(a[i]==4)
            {
                ans++;
            }
            else if(a[i]<4)
            {
                k=a[i]+a[s];
                if(k>4)
                    ans++;
                else if(k==4)
                {
                    ans++;
                    a[s]=0;
                    s--;
                }
                else if(k<4)
                {
                    a[s]=0;
                    for(s--;s>=i;s--)
                    {
                        k+=a[s];
                        if(k>4)
                        {
                            break;
                        }
                        else if(k==4)
                        {
                            a[s]=0;
                            break;
                        }
                        else
                        {
                            a[s]=0;
                        }
                    }
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
*/
