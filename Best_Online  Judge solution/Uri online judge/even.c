#include<stdio.h>
int main()
{
    int i,n,a;
    scanf("%d",&n);
    for(i=0;i<6;i++){
        a=n;
       n=a+1;

            printf("%d\n",n);
            n=n+1;
    }
    return 0;
}
