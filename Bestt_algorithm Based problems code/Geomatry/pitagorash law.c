#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    float c;
    printf("Enter the length of base=",a);
    scanf("%d",&a);
    printf("Enter the length of perpendicular=",b);
    scanf("%d",&b);
    c=sqrt((a*a)+(b*b));
    printf("Hypotenuse=%0.2f\n",c);
    return 0;


}
