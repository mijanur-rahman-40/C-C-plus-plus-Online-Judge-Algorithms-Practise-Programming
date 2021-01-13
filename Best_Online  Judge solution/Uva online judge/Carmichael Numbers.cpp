
#include<bits/stdc++.h>
using namespace std;
const int maxn=65000;
bool flag[maxn+1];
void sieve()
{
  flag[1]=1;
  for(int i=2; i<=maxn; i+=2){
    flag[i]=1;
  }
  for(int i=3; i<=maxn; i+=2){
    if(flag[i]==0){
        if(maxn/i>=i){
            int add=i*2;
            for(int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
  }
}
long long mod_to(long long a,long long p,long long mod)
{
    if (p==0)
        return 1;
    long long t=mod_to(a, p/2, mod);
    t= (t*t)% mod;
    if (p%2==1)
        t=(t*a)% mod;
    return t;
}
bool is_carmichel(int n)
{
    for(int i=2; i<n; i++)
    {
        if (mod_to(i, n, n) !=i){
                return false;
        }
    }
    return true;
}
int main()
{
    sieve();
   int num;
    while(scanf("%d",&num)==1 && num){
            if( flag[num]==1 && is_carmichel(num)==1){
              cout<<"The number "<<num<<" is a Carmichael number."<<endl;
            }
            else
                 cout<<num<<" is normal."<<endl;
            }
    return 0;
}
