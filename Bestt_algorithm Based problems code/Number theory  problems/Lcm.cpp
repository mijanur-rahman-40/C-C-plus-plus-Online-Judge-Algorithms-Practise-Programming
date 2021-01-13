/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d",&n,&m);
    int c,d;
    int e=n*m;
   c=__gcd(n,m);
   d=c;
   int  f=e/d;
   printf("%d",f);
    //printf("%lf",(double)d/(double)c);
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int GCD( int a, int b )
{
if( b == 0 )
    return a;
if( a < b )
    swap( a, b );
int r = a % b;
    return GCD( b, r );
}
int main()
{
    int n,m;
    scanf("%d",&n,&m);
    int c,d;
    d=n*m;
    c=GCD(n,m);
    printf("%d",d/c);

    return 0;
}
