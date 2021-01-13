#include<stdio.h>
int main()
{
    float r,v,a;
    printf("Enter radius\n",r);
    scanf("%f",&r);
    v=4*3.1416*r*r*r/3;
    a=4*3.1416*r*r;
    printf("Volume=%f\n",v);
    printf("Area=%f\n",a);
    return 0;
}
