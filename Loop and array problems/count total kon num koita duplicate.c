#include<stdio.h>
int flag[1000];
int main()
{
int i,n,a[1000];
while(scanf("%d",&n)==1){
for(i=1;i<=n;i++)
{
    scanf("%d",&a[i]);

    flag[i]++;
    for(i=1;i<=n;i++)
    {
        if(flag[i]!=0)
            printf("%d %d\n",flag[i],i);
    }
}
}
    return 0;
}
