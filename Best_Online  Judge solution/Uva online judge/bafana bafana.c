#include<stdio.h>
int main()
{
int n,a,b,c,ans,j;
while(scanf("%d",&n)==1)
{
for(j=1;j<=n;j++)
 {
 scanf("%d%d%d",&a,&b,&c);
 ans=b+c;
 while(ans>a)
  {
      ans=ans-a;}
   printf("Case %d: %d\n",j,ans);
  }
  }
return 0;
}
