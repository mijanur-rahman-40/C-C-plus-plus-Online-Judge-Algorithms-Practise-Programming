#include<stdio.h>
int main()
{
   double ave;
   int i=1,n,sum=0;
   scanf("%d",&n);
   while(i<=n){
        sum+=i;
   i++;
   }
   ave=sum/n;

   printf("%lf",ave);

   return 0;
}
