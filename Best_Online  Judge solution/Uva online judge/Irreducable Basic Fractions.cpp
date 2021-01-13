/*
#include<bits/stdc++.h>
using namespace std;
const long long maxn=10000002;
bool flag[maxn];
vector<long>primes;
void sieve()
{   flag[0]=1;
    flag[1]=1;
    primes.push_back(2);
    for(long int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    for(long int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
            primes.push_back(i);
        }
        if(maxn/i>=i){
           long  int add=i*2;
            for(long int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}
long long Euolar(long long n) {
  for (long int i =0;i<primes.size();i++) {
    if (n % primes[i]==0) {
      n= n-n/primes[i];
    }
  }
  return n;
}
int main()
{
sieve();
   long long  int  n;
    while(scanf("%lld",&n) && n){
          if(n==1){
               printf("1\n");
          }
          else{
            printf("%ld\n",Euolar(n));
          }
}
return 0;
}
*/
//uporer code ta basse efficent nah
#include<bits/stdc++.h>
using namespace std;
long long phi(long long int num)
{
    long long  ans;
    ans=num;
       if (num==1){
     return 1;
 }
    if (num%2==0){
          ans=ans-ans/2;
    while (num%2==0)
     num/=2;
    }
    for (long long j=3;j*j<=num;j+=2) {
      if (num%j==0)  {
          ans=ans-ans/j;
   while (num%j==0)
    num=num/j;
    }
   }
   if (num>1)
     ans= ans-ans/num;
   return ans;
   }
int main()
{
   long long  num;
    while(scanf("%lld",&num) && num)
    {
       printf("%lld\n",phi(num));
    }
    return 0;
}
