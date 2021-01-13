#include<stdio.h>
int add(int n1,int n2)
{
    return n1+n2;
}
int sub(int n1,int n2)
{
    return n1-n2;
}
int main()
{
    int (*fnc)(int ,int);
    int n2=10,n3=5;
    fnc=&add;
    printf("Result : %d\n",fnc(n2,n3));
    fnc=&sub;
    printf("Result : %d\n",fnc(n2,n3));
    return 0;
}

