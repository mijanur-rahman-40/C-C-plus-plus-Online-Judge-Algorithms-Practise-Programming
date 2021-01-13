#include<bits/stdc++.h>
using namespace std;
#define ll long long
long mod=1000000007;
long long bigmod(long long a,long long p){
  if(p==0){
    return 1%mod;
  }
  long long int t=bigmod(a,p/2);
  t=(t*t)%mod;
   if(p%2==1){
    t=(t*a)%mod;
  }
  return t;
}
int main()
{
     ll tst,a,p;
     scanf("%lld",&tst);
     while(tst--){
          scanf("%lld%lld",&a,&p);
          printf("%lld\n",bigmod(a,p));
     }
     return 0;
}
