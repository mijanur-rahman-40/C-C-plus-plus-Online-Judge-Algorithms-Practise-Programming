#include<stdio.h>
int a;
//static int b;
int b;
void function()
{
    a=a+1;
    b=b+1;
    return;

}
int main()
{
    function();
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    return 0;
}
