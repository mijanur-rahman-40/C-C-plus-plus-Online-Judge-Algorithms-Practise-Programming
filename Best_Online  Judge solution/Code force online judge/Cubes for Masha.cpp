
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int ok[1005];
int cube[3][7];
int n;
void deal(int cur,int now)
{
    if(cur==((1<<n)-1))return;
    for(int i=0;i<n;i++)
    {
        if(cur&(1<<i))continue;
        for(int j=0;j<6;j++)
        {
            ok[now*10+cube[i][j]]=1;
            deal(cur|(1<<i),now*10+cube[i][j]);
        }
    }
}
int main()
{
    //int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d",&cube[i][j]);
        }
    }

    deal(0,0);
    for(int i=1;i<=1000;i++)
    {
        if(!ok[i])
        {
            printf("%d\n",i-1);
            break;
        }
    }
    return 0;
}
