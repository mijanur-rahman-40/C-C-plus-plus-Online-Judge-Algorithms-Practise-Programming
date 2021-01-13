#include<stdio.h>
int main()
{
    int a=32,b=34,t;
    t=a;
    a=b;
    b=t;
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
    }
