#include<bits/stdc++.h>
using namespace std;
long long  pow_mod(long a,long n,long m)
{
    if(n==1)
        return a%m;
    long long  x=pow_mod(a,n/2,m);
    long long ans=x*x%m;
    if(n%2==1)
        ans=ans*a%m;
    return (long int)ans;
}
int main()
{
    int t,j=1;
    long long n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        int first=pow(10,fmod(log10(n)*m,1)+2);
        int last=pow_mod(n,m,1000);
        printf("Case %d: %d %03d\n",j++,first,last);
    }
    return 0;
}
