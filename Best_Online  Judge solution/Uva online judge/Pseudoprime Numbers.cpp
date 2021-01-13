/*
#include<bits/stdc++.h>
using namespace std;
long long bigmod(long long a,long long p,long long m){
  if(p==0){
    return 1%m;
  }

  long long int t=bigmod(a,p/2,m);
  //if(p%2==0){
  t=(t*t)%m;
   if(p%2==1){
    t=(t*a)%m;
  }
  return t;
}
*/
#include <stdio.h>
long long bigmod(long long x, long long y, long long m) {
    long long ans = 1, tmp = x;
    while(y) {
        if(y&1) {
            ans *= tmp;
            ans %= m;
        }
        y >>= 1;
        tmp *= tmp, tmp %= m;
    }
    return ans;
}
int isPrime(int x) {
    int i;
    for(i = 2; i*i <= x; i++)
        if(x%i == 0)
            return 0;
    return 1;
}
int main() {
    long long p, a;
    while(scanf("%lld %lld", &p, &a) == 2) {
        if(p == 0 && a == 0)
            break;
        if(isPrime(p) || bigmod(a, p, p)== a)
            puts("yes");
        else
            puts("no");
            printf("%lld",bigmod(a,p,p));
    }
    return 0;
}
