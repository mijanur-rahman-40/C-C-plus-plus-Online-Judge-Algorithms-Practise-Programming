#include<bits/stdc++.h>
using namespace std;
void test_b(int n)
{
     if(n>0)
          test_b(n-2);
     printf("%d",n);
}

int main()
{
     int a;
     cin>>a;
     test_b(a);
}
















/*
int func(int a)
{
     printf("%d\n",a);
     if(a==0)
          return 0;
     return func(a-2)+func(a-1);
}
int main()
{
     int a;
     printf("%d",func(4));
     return 0;
}
*/
