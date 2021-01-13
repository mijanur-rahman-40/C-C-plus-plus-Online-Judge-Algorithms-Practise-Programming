#include<stdio.h>
#define max(a,b)(a>b?a:b)
int main()
{
    //int a=83,b=323;
    int a,b;
    double d1,d2;
    scanf("%d%d",&a,&b);
    //double d1=8.32323,d2=3.33332323;
    printf("maximum of %d and %d is %d\n",a,b,max(a,b));
    scanf("%lf%lf",&d1,&d2);
    printf("maximum of %lf and %lf is %lf\n",d1,d2,max(d1,d2));
    return 0;
}
