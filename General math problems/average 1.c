#include<stdio.h>
int main()
{
   double ave,x,sum=0;
   int i=1,n;
   scanf("%d",&n);
   while(i<=n){
    scanf("%lf",&x);
    sum=sum+x;
    i++;
    }
    ave=sum/n;
    printf(" the average %lf",ave);
    return 0;
}
