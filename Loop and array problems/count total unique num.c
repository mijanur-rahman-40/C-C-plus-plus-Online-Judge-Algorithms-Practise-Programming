#include<stdio.h>
int flag[1000];
int main()
{
int i,n,count=0,a[1000];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    if(flag[a[i]]==0)
    {
        flag[a[i]]=1;
        count++;
    }
}
printf("%d",count);
return 0;
}

