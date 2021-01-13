#include<stdio.h>
struct s_type{
    int i;
    char ch;
    int *p;
    double d;
}s;
int main()
{
  printf("s_types %d bytes long",sizeof(struct s_type));
  return 0;
}


#include<stdio.h>
struct s_type{
int i;
double d;
}var1;
//struct s_type var1;
struct s_type f();
int main()
{
    //struct s_type var1;
    var1=f();
    printf("%d %f",var1.i,var1.d);
    return 0;
}
struct s_type f()
{
    struct s_type temp;
    temp.i=100;
    temp.d=123.23;
    return temp;
};


#include<stdio.h>
struct s_type{
int i;
double d;

};
void f(struct s_type temp);
int main()
{
    struct s_type var1;
    var1.i=99;
    var1.d=98.6;
    f(var1);
    return 0;
}
void f(struct s_type temp)
{
    printf("%d %f",temp.i,temp.d);
}


#include<stdio.h>
#include<string.h>
//struct s_type{
//   int i;
//   char str[80];
//}s,*p,q;
int main()
{
    struct s_type{
   int i;
   char str[80];
}s,*p,q;
   p=&s;
   s.i=10;
   p->i=10;
   strcpy(p->str,"i like structure");
   strcpy(q.str,"i  structure");
   printf("%d %d %s %s",s.i,p->i,p->str,q.str);
   return 0;
}

#include<stdio.h>
int main()
{
    struct b_type{
    int a:3;
    int b:3;
    int c:2;

    }bvar;
    bvar.a=-1;
    bvar.b=3;
    bvar.c=1;
    printf("%d %d %d",bvar.a,bvar.b,bvar.c);
    return 0;
}

#include<stdio.h>
int mian()
{
    union u_type{
    short int i;
    unsigned char c[2];

    }uvar;
    uvar.i=99;
    printf("High order byte: %u\n",uvar.c[1]);
    printf("Low order byte: %u\n",uvar.c[0]);
    return 0;
}


#include <stdio.h>

// This function swaps values pointed by xp and yp
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int x, y;
    printf("Enter Value of x ");
    scanf("%d", &x);
    printf("\nEnter Value of y ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}

#include<stdio.h>
struct s_type{
int i;
char ch;
double d;

};//var1,var2;
void struct_swap(struct s_type *i,struct s_type*j);
int main()
{
    struct s_type var1,var2;
    var1.i=100;
     var2.i=99;
     var1.ch='a';
     var2.ch='b';
     var1.d=1.0;
     var2.d=2.0;
     printf("var1:%d %c %f\n",var1.i,var1.ch,var1.d);
     printf("var2:%d %c %f\n",var2.i,var2.ch,var2.d);
     struct_swap(&var1,&var2);
     printf("After swap\n");
     printf("var1:%d %c %f\n",var1.i,var1.ch,var1.d);
     printf("var2:%d %c %f\n",var2.i,var2.ch,var2.d);
     return 0;

}
void struct_swap(struct s_type *i,struct s_type*j)
{
    struct s_type temp;
    temp=*i;
    *i=*j;
    *j=temp;
}



