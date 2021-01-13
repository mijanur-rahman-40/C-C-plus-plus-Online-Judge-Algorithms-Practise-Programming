#include<stdio.h>
int main()
{
    long int N,a;
    while(scanf("%d",&N)==1){
        if(N>0 && N<210000000){
            a=((N*(N+1)/2)+1);
            printf("%d\n",a);
        }
        if (N<0)
            break;
    }
        return 0;
}
