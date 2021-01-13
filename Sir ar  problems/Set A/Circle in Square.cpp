#include<stdio.h>
int main()
{
    float r,A,shadded;
    printf("Enter radius",r);
    scanf("%f",&r);
    A=3.1416*r*r;
    shadded =(4*r*r)-A;
    printf("Circumference=%f\n",shadded );
    return 0;

}

