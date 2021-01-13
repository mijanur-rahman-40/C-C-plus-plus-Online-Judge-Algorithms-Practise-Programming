#include<bits/stdc++.h>
using namespace std;
long long bigmod(long long a,long long p,long long m){
  if(p==0){
    return 1%m;
  }

  long long int t=bigmod(a,p/2,m);
  t=(t*t)%m;
   if(p%2==1){
    t=(t*a)%m;
  }
  return t;
}
int main()
{
   long long  a,p,m,t;
    while(scanf("%lld%lld%lld",&a,&p,&m)==3){
    t=bigmod(a,p,m);
    printf("%lld\n",t);
   }
    return 0;
}
