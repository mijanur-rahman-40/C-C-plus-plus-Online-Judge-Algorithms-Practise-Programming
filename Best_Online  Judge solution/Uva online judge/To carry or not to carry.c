#include<stdio.h>
int main()
{
    long int a,b;
   while(scanf("%ld%ld",&a,&b)==2){
    printf("%ld\n",a^b);
    }
    return 0;
}
