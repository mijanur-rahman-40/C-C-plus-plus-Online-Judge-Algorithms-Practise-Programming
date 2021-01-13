#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,ceil,arr[30010];
    scanf("%d%d",&num,&ceil);
    int sum=1,flag=0;
    for(int i=1; i<num; i++)
    {
        scanf("%d",&arr[i]);
    }
    int i=1;
    while(i<num)
    {
        sum=sum+arr[i];
        i=sum;
        if(i==ceil)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
