#include<bits/stdc++.h>
using namespace std;
const int maxn=10000002;
bool flag[maxn];
vector<int >primes;
void sieve()
{
    flag[1]=1;
    primes.push_back(2);
    for(int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    for(int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
            primes.push_back(i);
        }
        if(maxn/i>=i){
            int add=i*2;
            for(int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}

int countDivisor(int n) {
  int divisor = 1;
  for (int i = 0; i < primes.size(); i++) {
    if (n % primes[i] == 0) {
      int count = 1;
      while (n % primes[i] == 0) {
        n /= primes[i];
        count++;
      }
      divisor *= count;
    }
  }
  return divisor;
}
int main()
{
    sieve();
    int n;
    while(scanf("%d",&n) && n){
        printf("%d\n",countDivisor(n));

    }
    return 0;
}

