#include<stdio.h>
void function()
{
    int a=10;
    static int s=10;
    a=a+2;
    s=s+2;
    printf("a= %d, s=%d\n",a,s);

}
int main()
{
    function();
    function();
    function();
    return 0;
}
