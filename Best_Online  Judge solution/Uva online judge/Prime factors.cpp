
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
/*

/*
#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
#define MAX 50000
#define size 5500
typedef long long ll;
int prime[size], status[MAX];
int factor[200];
int p, d;

void siv()
{
    int n, i, j;
    n=MAX;
    int sq= sqrt(n);
    for(i=3; i<=sq; i+=2)
    {
        if(status[i]==0)
        {
            for(j=i*i; j<=n; j+=(i+i))
            {
                status[j]=1;
            }
        }
    }
    prime[0]=2;
    p=1;
    for(i=3; i<=n; i+=2)
    {
        if(status[i]==0)
        {
            prime[p++] = i;
        }
    }
}

void primeFactor(int n)
{
    int  i, j;
    int sq= sqrt(n);
    d=0;
    for(i=0; prime[i]<=sq; i++)
    {
        while(n%prime[i]==0)
        {
            factor[d++] = prime[i];
            n /= prime[i];
        }
    }
    if(n>1)
    {
        factor[d++] = n;
    }
}

int main()
{
    siv();
    ll n, c;
    while(cin >> n)
    {
        if(n==0)
            break;
        if(n<0)
        {
            n *=(-1);
            printf("-%lld = -1 x ", n);
            primeFactor(n);
            for(c=0 ; c<d ; c++)
            {
                if(c==d-1)
                {
                    printf("%d", factor[c]);
                }
                else
                {
                    printf("%d x ", factor[c]);
                }
            }
        }
        else
        {
            printf("%lld = ", n);
            primeFactor(n);
            for(c=0 ; c<d ; c++)
            {
                if(c==d-1)
                {
                    printf("%d", factor[c]);
                }
                else
                {
                    printf("%d x ", factor[c]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}


*/

