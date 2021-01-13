#include<stdio.h>
int main()
{
int ans=0,p,q,i,n;
while(scanf("%d",&n)==1)
{
//ans=0;
for (i=0; i<n; i++)
{
scanf("%d%d",&q,&p);
if (p-q>=2)
ans++;
}
printf("%d\n", ans);
}
return 0;
}
