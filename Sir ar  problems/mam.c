#include<stdio.h>
int main()
{
    int i=1,T,a,b,c,d;
    scanf("%d",&T);
    while(i<=T){
        scanf("%d%d%d",&a,&b,&c);
        printf("Case %d: ",i++);
        d=a+b+c;
        printf("Sum of %d, %d and %d is %d\n",a, b ,c, d);
    }
    return 0;
}
