
#include <stdio.h>
#include <algorithm>
#include <math.h>
using namespace std;
void factors(long long int fact[],long long int n)
{
    long long int i,j=0;
    for(i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            fact[j++]=i;
            if(i!=sqrt(n))
               fact[j++]=n/i;
        }
    }
    sort(fact,fact+j);
    for(i=0; i<j-1; i++)
          printf("%lld ",fact[i]);
}
int main()
{
    long long int n,array[1000];
    while(scanf("%lld",&n)==1){
    factors(array,n);
    printf("\n");
    }
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
const int maxn=10000000;
bool flag[maxn];
vector<int>prime;
void sieve()
{
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
int main()

{
     sieve();
      int num,i;
     while(scanf("%d",&num) && num){
          for( i=0;i<=num/2;i++){
               if(num%prime[i]==0){
                    printf("%d ",prime[i]);
               }
          }
          printf("\n");
          prime.clear();
     }
     return 0;
}
*/
