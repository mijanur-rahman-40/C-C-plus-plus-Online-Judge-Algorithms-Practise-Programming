#include <bits/stdc++.h>

using namespace std;

const int SIZ = 10000;
int cnt = 0;
bool flag[SIZ+5];
vector<int> primes;

void sieve(){
    primes.push_back(2);
    for(int i=3; i<SIZ; i+=2){
        if(!flag[i]){
            for(int j=i; j<SIZ; j+=i){
                flag[j] = true;
            }
            primes.push_back(i);
        }
    }
}


int main(){
    sieve();
    cout<<"number of primes: "<<(int)primes.size()<<endl;
    return 0;
}


















/*

int relPrime(int n){ //relative prime
    int i;
    int ans=n;
    for(i=1;prime[i]*prime[i]<=n;i++)
    if(n%prime[i]==0){
        while(n%prime[i]==0) n/=prime[i];
        ans/=prime[i];
        ans*=(prime[i]-1);
    }

    if(n>1){
        ans/=n;
        ans*=(n-1);
    }
    return ans;
}
*/

