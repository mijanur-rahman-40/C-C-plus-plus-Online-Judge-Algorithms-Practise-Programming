#include<stdio.h>
#define pf printf
int main()
{
    int a=4;
    int c=a>>2;
    pf("c=%d\n",c);
    //int b=a<<2;
    a<<=2;
    pf("b=%d\n",a);
    return 0;
}
