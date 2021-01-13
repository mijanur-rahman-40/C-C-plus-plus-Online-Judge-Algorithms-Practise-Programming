//nesar code ta com efficent
/*
#include<bits/stdc++.h>
using namespace std;
const  int maxn=5*10000000;
bool flag[maxn];
vector<int >primes;
void sieve()
{   flag[0]=1;
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
int Euolar(int n) {
  for (int i = 0; i < primes.size(); i++) {
    if (n % primes[i] == 0) {
      n-= n/primes[i];
    }
  }
  return n;
}
int main()
{
sieve();
    int t,i=1;
   unsigned long int  a,b;
    scanf("%d",&t);
    while(t--){
          scanf("%lu%lu",&a,&b);
            if(a==b){
                    unsigned long int d,sm;
                    d=Euolar(a);
                    sm=pow(d,2);
            printf("Case %d: %lu\n",i++,sm);
            }
            else{
                    unsigned long  int sum=0;
                for(int i=a;i<=b;i++){
                    int c=Euolar(i);
                 sum+=pow(c,2);
                }
                printf("Case %d: %lu\n",i++,sum);
            }
}
return 0;
}
*/

#include<bits/stdc++.h>
#define MAX 5000005
using namespace std;
unsigned long long int phi[MAX] ;
void sievePHI(){
    for(long long int i=1;i<MAX;i++){
        phi[i]=i;
    }
    for( long long int i=2;i<MAX;i++){
        if( phi[i]==i){
            for(long long int j=i;j<MAX;j+=i){
                phi[j]=(phi[j]/i)*(i-1) ;
            }
        }
    }
    for(long long int i=2;i<MAX;i++){
        phi[i]*=phi[i];
        phi[i]+=phi[i-1];
    }
}
int main() {
    sievePHI();
    long int T,i=1;
    scanf("%d", &T);
    while (T--) {
       unsigned long long  int a,b,sum;
        scanf("%llu%llu", &a,&b);
        sum=phi[b]-phi[a-1];
        printf("Case %ld: %llu\n",i++,sum);
    }
    return 0;
}





/*
#include <bits/stdc++.h>

using namespace std;

unsigned long long int phi[5000005];
int mark[5000005];

void seivePhi()
{
    for(int i=2; i<=5000002; i++) phi[i] = i;
    for(int i=2; i<=5000002; i++)
        if(!mark[i])
            for(int j=i; j<=5000002; j+=i)
            {
                mark[j] = 1;
                phi[j] = phi[j]/i * (i-1);
            }
    for(long long int i=3; i<5000002; i++)
    {
        phi[i] *= phi[i];
        phi[i] += phi[i-1];
    }

}
int main()
{
    seivePhi();
    int tst;
    unsigned long long int ans, a, b;
    scanf("%d", &tst);
    for(int i=1; i<=tst; i++)
    {
        scanf("%llu%llu", &a, &b);
        ans = phi[b] - phi[a-1];
        printf("Case %d: %llu\n", i, ans);
    }
    return 0;
}
*/

