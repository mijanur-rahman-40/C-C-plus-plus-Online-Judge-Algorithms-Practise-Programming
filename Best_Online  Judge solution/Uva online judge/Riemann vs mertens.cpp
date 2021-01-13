#include <stdio.h>
int mu[1000005], M[1000005] = {};
int p[1005], pt = 0;
void sieve() {
    int i, j, mark[1005] = {};
    for(i = 2; i <= 1000; i++) {
        if(mark[i] == 0) {
            p[pt++] = i;
            for(j = i+i; j <= 1000; j += i)
                mark[j] = 1;
        }
    }
}
int main() {
    sieve();
    mu[1] = 1, M[1] = 1;
    int n, i, j;
    for(i = 2; i <= 1000000; i++) {
        n = i;
        int cnt = 0;
        for(j = 0; j < pt && p[j]*p[j] <= n; j++) {
            if(n%p[j] == 0) {
                cnt++;
                if(n/p[j]%p[j] == 0) {
                    cnt = -100;
                    break;
                }
                n /= p[j];
            }
        }
        if(n != 1)
               cnt++;
        if(cnt < 0)
        mu[i] = 0;
        else if(cnt%2==1)
         mu[i] = -1;
        else
        mu[i] = 1;
        M[i] = M[i-1] + mu[i];
    }
    while(scanf("%d", &n) == 1 && n)
        printf("%8d%8d%8d\n", n, mu[n], M[n]);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
const long long  int maxn=1000005;
bool flag[maxn];
vector< int >prime;
vector< int>factor;
set<int>st;
set<int>st1;
int coun;
int coun1;
int sum;
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
void factorization( long int n)
{
     coun=0;
    for(long  int i=0;i<=n/2;i++){
   if(n%prime[i]==0){
        while(n%prime[i]==0)
        {
            st.insert(prime[i]);
            n/=prime[i];
            coun++;
        }

    }
}
}
void factorization1( long int n)
{
     coun1=0;
    for(long  int i=0;i<=n/2;i++){
   if(n%prime[i]==0){
        while(n%prime[i]==0)
        {
            st1.insert(prime[i]);
            n/=prime[i];
            coun1++;
        }

    }
}
}
int main()
{
   long long int  n;
    sieve();
   while(scanf("%lld",&n) && n){
            for(int i=2;i<=n;i++){
               n=i;
            int coun=0;
               for(int j=0;prime[j]*prime[j]<=n;j++){
                    if()
               }















            if(st.size()!=coun ){
                    sum=sum+0;
            }
            else if(coun%2==0 && siz==coun){
                  sum=sum+1;
            }
            else if(coun%2==1 && siz==coun){
                 sum=sum-1;
            }
            st.clear();
            }
           }
           if(n!=1){
           factorization1(n);
            int siz1=st1.size();
           if(st1.size()!=coun1 ){
                   printf("0\t");
            }
            else if(coun1%2==0 && siz1==coun1){
                 printf("1\t");
            }
            else if(coun1%2==1 && siz1==coun1){
                 printf("-1\t");
            }
            st1.clear();
           printf("%d",sum);
           }

            printf("\n");

       st.clear();
   }
    return 0;
}
//nesar code ta  com effice
/*
#include<bits/stdc++.h>
using namespace std;
const long long  int maxn=1000005;
bool flag[maxn];
vector< int >prime;
vector< int>factor;
set<int>st;
set<int>st1;
int coun;
int coun1;
int sum;
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
void factorization( long int n)
{
     coun=0;
    for(long  int i=0;i<=n/2;i++){
   if(n%prime[i]==0){
        while(n%prime[i]==0)
        {
            st.insert(prime[i]);
            n/=prime[i];
            coun++;
        }

    }
}
}
void factorization1( long int n)
{
     coun1=0;
    for(long  int i=0;i<=n/2;i++){
   if(n%prime[i]==0){
        while(n%prime[i]==0)
        {
            st1.insert(prime[i]);
            n/=prime[i];
            coun1++;
        }

    }
}
}
int main()
{
   long long int  n;
    sieve();
   while(scanf("%lld",&n) && n){
          printf("%d\t",n);
          if(n==1){
               printf("1\t1");
            }
           else{
               sum=1;
            for(int i=2;i<=n;i++){
               factorization(i);
                int siz=st.size();
            if(st.size()!=coun ){
                    sum=sum+0;
            }
            else if(coun%2==0 && siz==coun){
                  sum=sum+1;
            }
            else if(coun%2==1 && siz==coun){
                 sum=sum-1;
            }
            st.clear();
            }
           }
           if(n!=1){
           factorization1(n);
            int siz1=st1.size();
           if(st1.size()!=coun1 ){
                   printf("0\t");
            }
            else if(coun1%2==0 && siz1==coun1){
                 printf("1\t");
            }
            else if(coun1%2==1 && siz1==coun1){
                 printf("-1\t");
            }
            st1.clear();
           printf("%d",sum);
           }

            printf("\n");

       st.clear();
   }
    return 0;
}
*/
