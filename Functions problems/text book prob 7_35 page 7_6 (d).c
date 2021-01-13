#include<stdio.h>
int function(int n);
int main()
{
    int n=10;
    printf("%d",function(n));
    return 0;
}
int function(int n)
   {
       if(n>0)
        return (n+function(n-2));
   }
