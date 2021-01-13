
/*
Take 1, 2
Take 1, 3
Take 1, 4
Take 2, 3
Take 2, 4
Take 3, 4
*/
#include<bits/stdc++.h>
using namespace std;
long long shipu=1000003;
long long f[1000005];
long long mod(long long b,long long p)
{
    if(p==1)
        return b;
    if(p%2==1)
        return(mod(b,p-1)*b)%shipu;
    else
    {
        long long res=mod(b,p/2);
        return (res*res)%shipu;
    }
}
int main()
{
    long long t,n,r,s,res,no=0;
    scanf("%lld",&t);
    f[1]=1;
    for(long i=2;i<1000001;i++)
    f[i]=(i*f[i-1])%shipu;
    while(t--)
    {
        scanf("%lld%lld",&n,&r);
            if(n<r)
            {
                 printf("Case %d: 0\n",++no);
                 continue;
            }
            else if(n==r||r==0)
            {
                printf("Case %d: 1\n",++no);
                continue;
            }
        s=((f[n-r]%shipu)*(f[r]%shipu))%shipu;
        printf("Case %lld: %lld\n",++no,(f[n]*mod(s,shipu-2))%shipu);

    }
    return 0;
}



#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, r, t, i, ans, cs=1, up, dwn, fac[1000009];
const ll mod=1000003;

ll bigmod(ll b, ll p){
    if(p==0) return 1;
    ll x=bigmod(b, p/2);
    x=(x*x)%mod;
    if(p%2==1)x=(x*b)%mod;
    return x;
}

int main(){
    fac[0]=1;
    for(i=1; i<=1000000; i++){
        fac[i]=(fac[i-1]*i)%mod;
    }

    cin>>t;
    while(t--){
        cin>>n>>r;
        up=fac[n];
        dwn=(fac[n-r]*fac[r])%mod;
        ans=up*bigmod(dwn, mod-2);
        cout<<"Case "<<cs++<<": "<<ans%mod<<endl;
    }
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
#define MAXX 1000002
#define MOD 1000003


ll fac[MAXX];


ll BigMod(ll a, int p)
{
    if(p == 0)
    {
        return 1;
    }

    int half = p/2;

    ll res = BigMod(a, half);
    res = (res*res) % MOD;
    if((p & 1) > 0)
    {
        res = (res*a)%MOD;
    }
    //cerr<<a<<"^"<<p<<" = "<<res<<endl;
    return res;
}

int main()
{
    //cerr<<(BigMod(2, 1024));
    fac[0] = 1;

    FOR(i, 1, 1000001)
    {
        fac[i] = (fac[i-1]*i)%MOD;
    }

    int kases, kaseno = 0;
    int n, r;
    take(kases);

    while(kases--)
    {
        take(n, r);
        ll nice = (fac[r] * fac[n-r])% MOD;
        nice = BigMod(nice, MOD-2);

        ll res = (fac[n]*nice)%MOD;

        pf("Case %d: %lld\n", ++kaseno, res);

    }
    return 0;


}






LightOJ 1067 - Combinations hints and solution
/**

We know, nCr = n! / (r!*(n-r)! )

In this problem , we should output nCr % mod ... ( mod = 1e6+3 )
So, we should pre calculate factorial of i in fact[i], i<=1e6

But the problem is when we need to evaluate this expression (a/b)% mod
Because it is not similar to ( (a%mod)/(b%mod) ) % mod
Thus , to do this we may take help of modular multiplicative inverse.
I we know the  modular multiplicative inverse of b is x then the expression can be
evaluated as (a*x)%mod

In case you don't know about  modular multiplicative inverse , go here  😊

**/




#include<bits/stdc++.h>
#define ll long long
#define mx 1000000
const long long  m = 1e6+3;
using namespace std;

ll gcd(ll a, ll b);

ll power(ll x, unsigned ll y, unsigned ll m);

ll modInverse(ll a, ll m)
{
    ll g = gcd(a, m);
    return power(a, m-2, m);
}

ll power(ll x, unsigned ll y, unsigned ll m)
{
    if (y == 0)
        return 1;
    ll p = power(x, y/2, m) % m;
    p = (p * p) % m;

    return (y%2 == 0)? p : (x * p) % m;
}

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}


ll  fact[mx+1];

int main()
{
    fact[0]=1;

    for(ll i=1; i<=mx; i++)
    {
        fact[i]=((fact[i-1]%m)*(i%m))%m;
    }

    ll t,n,r,ans;

    scanf("%lld",&t);
    for(ll ca=1; ca<=t; ca++)
    {
        scanf("%lld%lld",&n,&r);

        ans= ((fact[r]%m)*(fact[n-r]%m))%m;
        ans=modInverse(ans,m);
        ans=((fact[n]%m)*(ans%m))%m;
        printf("Case %lld: %lld\n",ca,ans);
    }
}
