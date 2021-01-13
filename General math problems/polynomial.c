#include<stdio.h>
#include<math.h>
int main()
{
    float x,y,a;
    printf("Enter a number x=",x);
    scanf("%f",&x);
    a=(x-1)/x;
    y=a+(pow(a,2)/2)+(pow(a,3)/3)+(pow(a,4)/4);
    printf("Thee value of polynomial y=%f\n",y);
    return 0;
}

