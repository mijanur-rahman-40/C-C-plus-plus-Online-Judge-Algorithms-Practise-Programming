#include<bits/stdc++.h>
using namespace std;
const long long  int maxn=1000005;
bool flag[maxn];
vector< int >prime;
vector< int >prime1;
vector< int>factor;
set<int>st;
 long int coun=0;
void sieve()
{   flag[0]=1;
    flag[1]=1;
    prime.push_back(2);
    for(long int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    for(long int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
            prime.push_back(i);
        }
        if(maxn/i>=i){
            long int add=i*2;
            for(long  int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}
void factorization(long long int n)
{
    for(long  int i=0;i<=prime.size()/2;i++){
   if(n%prime[i]==0){
        while(n%prime[i]==0)
        {
            st.insert(prime[i]);
            n/=prime[i];
        }

    }
}
}
int main()
{
   long long int  n;
    sieve();
   while(scanf("%lld",&n) && n){
    factorization(n);
            printf("%lld ar unique prime factor is: ",n);
          printf("%d ",st.size());
    printf("\n");
    st.clear();
   }
    return 0;
}
