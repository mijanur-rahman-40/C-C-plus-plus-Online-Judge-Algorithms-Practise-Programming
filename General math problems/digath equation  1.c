#include<stdio.h>
#include<math.h>
int main()
{
    int a=1,b=5,c=3;
    float x1,x2;
    printf("Standard Equation ax^2+bx+c=0\n");
    //printf("Enter the value of a=",a);
    //scanf("%d",&a);
   //printf("Enter the value of b=",b);
    //scanf("%d",&b);
   // printf("Enter the value of c=",c);
    //scanf("%d",&c);
    x1=(-b+sqrt(pow(b,2)-4*a*c))/2*a;
    x2=(-b-sqrt(pow(b,2)-4*a*c))/2*a;
    printf("Root1=%f\n",x1);
    printf("Root2=%f\n",x2);
    return 0;
}
