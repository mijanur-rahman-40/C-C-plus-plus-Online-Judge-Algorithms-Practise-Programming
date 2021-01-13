
// nesar code dea 15 digit porjonto prime factorization kora jai
#include<bits/stdc++.h>
using namespace std;
const long long  int maxn=100000005;
bool flag[maxn];
vector< int >prime;
vector< int >prime1;
vector< int>factor;
map<long long,long long>mp;
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
    for(long  int i=0;prime[i]<=sqrt(n);i++){
   if(n%prime[i]==0){
        while(n%prime[i]==0)
        {
            factor.push_back(prime[i]);
            n/=prime[i];
        }

    }
}
if(n>1){
     factor.push_back(n);
}
}
int main()
{
   long long int  n;
    sieve();
   while(scanf("%lld",&n) && n){
    factorization(n);
            printf("%lld ar prime factorization is: ",n);
    for( int i=0;i<factor.size();i++){
        if(mp.find(factor[i])!=mp.end())
        {
            mp[factor[i]]++;
        }
        else{
        mp.insert(pair<long long,long  long>(factor[i],1));

        }
  }
    int siz=mp.size();
  for(map<long long,long long>::iterator it=mp.begin();it!=mp.end();it++)
  {
       coun++;
      cout<<it->first<<"^"<<it->second<<" ";
      if((coun/siz)==0){
          printf("*");
      }
          printf(" ");
   }
    printf("\n");
    factor.clear();
    mp.clear();
    coun=0;
}
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
const int maxn=10000005;
bool flag[maxn];
vector< int >prime;
vector< int>factor;
int coun=0;
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
            for(long  int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}
void factorization(long long int n)
{
    for(int i=0;prime[i]<=sqrt(n);i++){
   if(n%prime[i]==0){
        while(n%prime[i]==0)
        {
            factor.push_back(prime[i]);
            n/=prime[i];
        }

    }
    }
    if(n>1){
     factor.push_back(n);
    }

}
int main()
{
   long  long int  n;
    sieve();
   while(scanf("%lld",&n) && n){
  if(n==1){
     printf("%d = 1",n);
  }
   else if(n<0){
       n=n*(-1);
     printf("-%lld = -1 ",n);

      factorization(n);
            for(int i=0;i<factor.size();i++){
               printf("x %lld ",factor[i]);
            }
    }
   else if(n>1){
     factorization(n);
     if(factor.size()==1){
     printf("%lld = %lld",n,n);
    }
    else{
     printf("%lld = ",n);
    for(int i=0;i<factor.size();i++){
          coun++;
               printf("%lld ",factor[i]);
               if(factor.size()>coun){
          printf("x ");
               }
    }

    }
   }
            printf("\n");
            factor.clear();
            coun=0;
    }
    return 0;
}
*/
/*
//nesar code 18-20 digit porjonto prime factorization kora jai
#include<bits/stdc++.h>
using namespace std;
const int maxn=10000005;
bool flag[maxn];
vector<int>prime;
void sieve()
{

     flag[0]=flag[1]=1;
      prime.push_back(2);
    for(int i=4; i<maxn; i+=2)
     {
        flag[i]=1;
    }
    for(int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
               prime.push_back(i);
        if(maxn/i>=i)
        {
            int add=i*2;
            for(int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}
}
int main()
{
  sieve();
    long long int num;
    while (scanf("%lld",&num)==1){
        if (num < 0)
          break;

        for (int i = 0; i <=prime.size(); i++){
            while (num% prime[i] == 0){
                printf("  %d",prime[i]);
                num /= prime[i];
            }
            if (num== 1)
               break;
        }
        if (num!= 1) printf("    %lld\n",num);
        printf("\n");
    }
    return 0;
}
*/
//75867465768793746576
/*
#include <bits/stdc++.h>
using namespace std;
#define MAXN   10000001
int prime[MAXN];
void sieve()
{
    prime[1] = 1;
    for (int i=2; i<MAXN; i++)

        prime[i] = i;
    for (int i=4; i<MAXN; i+=2){
      prime[i] = 2;
    }
    for (int i=3; i*i<MAXN; i++)
    {
        if (prime[i] == i)
        {
            for (int j=i*i; j<MAXN; j+=i)
                if (prime[j]==j)
                    prime[j] = i;
        }
    }
}
vector<int> getFactorization(long int x)
{
    vector<int> ret;
    while (x != 1)
    {
        ret.push_back(prime[x]);
        x = x /prime[x];
    }
    return ret;
}

int main()
{
    sieve();
    long  int x;
    while(scanf("%ld",&x) && x){
    cout << "prime factorization for " << x << " : ";
    vector <int> p;
    p= getFactorization(x);

    for (int i=0; i<p.size(); i++)
        cout << p[i] << " ";
    cout << endl;
    }
    return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
const int size=100;
int primeFactor[size]; ///Size should be as big as N
const int maxn=100;
bool flag[maxn];
vector<int >prime;
vector<int>factor;
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
            for(int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}
void factorize( int n ) {
    int sqrtn = sqrt ( n );
    for ( int i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        if ( n % prime[i] == 0 ) {
            while ( n % prime[i] == 0 ) {
                n /= prime[i];
                primeFactor[ prime[i] ]++; ///Increment global primeFactor array
            }
            sqrtn = sqrt ( n );
        }
    }
    if ( n != 1 ) {
        primeFactor[n]++;
    }
}

void factFactorize ( int n ) {
    for ( int i = 2; i <= n; i++ ) {
        factorize( i );
    }

    ///Now We can print the factorization
for ( int i = 0; i <n/2; i++ ) {
        printf ( "%d^%d\n", prime[i], primeFactor[ prime[i] ] );
    }
}
int main()
{
    sieve();
    int n;
    cin>>n;
    factFactorize(n);

}
*/
