#include<stdio.h>
int main()
{
    float r,A,C;

    printf("Enter radius\n",r);
    scanf("%f",&r);
    A=3.1416*r*r;
    C=2*3.1416*r;
    printf("Area=%f\n",A);

    printf("Circumference=%f\n",C);
    return 0;

}
