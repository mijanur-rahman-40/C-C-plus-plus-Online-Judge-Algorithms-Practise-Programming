#include<stdio.h>
int main()
{
      //x+y=a,x-y=b
double x,y,a,b;
printf("enter the value of x+y:");
scanf("%lf",&a);
printf("enter the value of x-y:");
scanf("%lf",&b);
x=(a+b)/2;
y=(a-b)/2;
printf("x=%0.2lf,y=%0.2lf\n",x,y);
return 0;
}

