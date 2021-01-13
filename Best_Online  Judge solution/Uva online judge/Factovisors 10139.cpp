#include<bits/stdc++.h>
using namespace std;
const  int maxn=1000005;
bool flag[maxn];
vector< int >prime;
void sieve()
{   flag[0]=1;
    flag[1]=1;
    prime.push_back(2);
    for(int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    for(int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
            prime.push_back(i);
        }
        if(maxn/i>=i){
            int add=i*2;
            for(int j=i*i;j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}
int solve(int n, int m){
    for(int i=0;prime[i]<=sqrt(m);i++){
        if(m% prime[i] == 0) {
            int coun= 0;
            while(m%prime[i] == 0){
                coun++;
                 m=m/prime[i];
            }
            long long tmp =  prime[i],sum=0;
            while(tmp <= n) {
                sum=sum+n/tmp;
                tmp=tmp*prime[i];
            }
            if(sum<coun)
               return 0;
        }
    }
    if(m != 1) {
        if(n < m)
               return 0;
    }
    return 1;
}
int main() {
    sieve();
    int n, m;
    while(scanf("%d %d", &n, &m) == 2) {
        if(solve(n, m)==1)
            printf("%d divides %d!\n", m, n);
        else
            printf("%d does not divide %d!\n", m, n);
    }
    return 0;
}
