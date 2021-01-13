#include<stdio.h>
int main()
{
    int x=10,y,a;
    int *p,*q;
    a=2;
    a=1;
      p=&x;
         q=&y;
    //y=*p;
    *p=15;
       *q=20;

    printf("Value of x:%d\n",x);
     printf("Value of y:%d\n",y);
      printf("Value of *p:%d\n",*p);
       printf("Value of *q:%d\n",*q);
        printf("Value of a:%d\n",a);
    return 0;

}

