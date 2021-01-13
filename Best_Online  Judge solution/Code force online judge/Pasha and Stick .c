#include<stdio.h>
int main()
{
   long t;
    while(scanf("%ld",&t)==1){
    if(t%2==1 && t<5)
        break;

    printf("%ld\n",((t/2)-1)/2);
    }
    return 0;
}
