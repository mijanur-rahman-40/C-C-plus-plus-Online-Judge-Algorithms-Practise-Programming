#include<stdio.h>
int main()
{
long long int a;
for(;;)
{
scanf("%lld",&a);
printf("%lld\n",a%47);
}
return 0;
}