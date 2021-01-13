#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int a=2;
//ll bigmod(ll m,ll n){
//  if(n==0){
//    return 1;
//  }
//  ll t=bigmod(m,n/2);
//  t=(m)%(t*t);
//   if(n%2==1){
//    t=(m)%(t*a);
//  }
//  return t;
//}
int main()
{
    ll n,m;
     scanf("%lld%lld",&n,&m);
    ll ans=(pow(2,n));
      ans=m%ans;
     printf("%lld\n",ans);
     return 0;
}
