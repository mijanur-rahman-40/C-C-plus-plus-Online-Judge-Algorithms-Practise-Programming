#include<stdio.h>
int main()
{
    char c='A';
    char *p,**q,***r,****s;
    p=&c;
    q=&p;
    r=&q;
    s=&r;
    printf("Value of c : %c\n",c);
     printf("Value of c : %c\n",*p);
      printf("Value of c : %c\n",**q);
        printf("Value of c : %c\n",***r);
          printf("Value of c : %c\n",****s);
      return 0;

}
