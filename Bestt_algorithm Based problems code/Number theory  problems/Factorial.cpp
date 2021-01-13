
/*#include<stdio.h>
int Fact(int n)
         {
             int multi=1;
             for(int i=1;i<=n;i++)
                multi=multi*i;
             return multi;
         }
         int main()
         {
           int a;
           scanf("%d",&a);
           a=Fact(a);
           printf("%d\n",a);
           return 0;
         }
*/
#include <stdio.h>

long long int factorial(int N)
{
    long long ans = 1;
    int i;
    for(i=1; i <= N; i++)
    ans *= i;
    return ans;
}

int main()
{
    int t;
    for(t=1; t <= 21; t++)
    {
        printf("%lld\n", factorial(t));
    }
    return 0;
}
