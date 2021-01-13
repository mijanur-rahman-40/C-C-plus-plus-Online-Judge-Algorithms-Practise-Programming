#include<stdio.h>
int main()
{
    float F,C;
    printf ("Enter temperature in Fahrenheit=",F);
    scanf("%f",&F);
    C=(5.0/9)*(F-32);
    printf("Temperature in Celsius=%f\n",C);
    return 0;
}
