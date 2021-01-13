#include<stdio.h>
int main()
{
    long long  int a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    printf("%lld\n",((a+c-1)/c)*((b+c-1)/c));
    return 0;
}
