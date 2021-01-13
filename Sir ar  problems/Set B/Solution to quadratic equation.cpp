#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
double x1,x2;
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("c=");
scanf("%d",&c);
//scanf("%d%d%d",&a,&b,&c);
if
    (b*b-4*a*c>0)
{
x1=(-b+sqrt(b*b-4*a*c)/(2*a));
x2=(-b-sqrt(b*b-4*a*c)/(2*a));
printf("the value of x1 is=%lf\n",x1);
printf("the value of x2 is=%lf\n",x2);
}
else
    {
    printf("undefine\n");
}
 // printf("x1=%f\n x2=%f\n",x1,x2);
 //printf("\n");
  return 0;

}
