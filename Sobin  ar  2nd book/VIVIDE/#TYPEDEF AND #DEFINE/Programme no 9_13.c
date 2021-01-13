#include<stdio.h>
#define ip int*
int main(int argc,char *argv[])
{
    int *a;
    ip b=44;
    ip c=500,d=7;
    printf("b= %d c= %d d= %d \n",b,c,d);
    return 0;
}
