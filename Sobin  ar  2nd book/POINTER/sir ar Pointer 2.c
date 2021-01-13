#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,n;
    //int *p,*q;
    scanf("%d",&a);
    a=5;
    n=2;
    //p=&a;
    //int  *p=2;
    int *p=&a;
    printf(" p=%x  a=%d n=%d",*p,a,n);
    return 0;
}
