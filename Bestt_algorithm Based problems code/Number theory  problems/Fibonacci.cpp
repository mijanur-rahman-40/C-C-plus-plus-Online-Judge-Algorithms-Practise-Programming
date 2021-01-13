/*
#include<stdio.h>
int Fibo(int n);
int main()
{
    int a,x;
    scanf("%d",&a);
    x=Fibo(a);
    printf("%d\n",x);
    return 0;
}
int Fibo(int n)
{ int a=0,b=1,c;
    for(int i=2;i<n;i++)
    {
        c=a+b;
    a=b;
    b=c;
}
return c;
}

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a;
     scanf("%d",&a);
    int  b=ceil((double)a/2);
     printf("%d\n",b);
}
