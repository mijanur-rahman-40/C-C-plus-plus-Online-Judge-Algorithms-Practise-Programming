#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1000000007;
ll mod1=333333336;
//ll bigmod(ll a,ll p)
//{
//     if(p==0){
//          return 1;
//     }
//     ll t=bigmod(a,p/2);
//     t=(t*t)%mod;
//     if(p%2==1){
//          t=(t*a)%mod;
//     }
//     return t;
//}
int main()
{
   ll tst,num;
   scanf("%lld",&tst);
   while(tst--){
     scanf("%lld",&num);
     //ll mod1=bigmod(3,mod-2);
    ll ans=((num%mod)*((num+1)%mod))%mod;
    ll res=(ans*mod1)%mod;
    printf("%lld\n",res);
   }
   return 0;
}
//333333336
