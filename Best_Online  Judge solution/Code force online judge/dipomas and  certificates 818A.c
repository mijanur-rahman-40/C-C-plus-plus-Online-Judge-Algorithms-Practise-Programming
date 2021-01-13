#include<stdio.h>
int main()
{
    long long int  sum,x,y,a,n;
     scanf("%lld",&sum);
     scanf("%lld",&n);
     x=sum/(2*(n+1));
     y=n*x;
     printf("%lld %lld %lld\n",x,y,sum-x-y);
     return 0;
}
