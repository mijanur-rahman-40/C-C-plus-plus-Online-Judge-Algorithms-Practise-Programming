#include<bits/stdc++.h>
using namespace std;
const int maxn=1000000;
bool flag[maxn];
vector<int >prime;
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
 void factprime(int prime,int num)
 {
     int quiet,sum=0;
    while(num>1){
        quiet=num/prime;
        sum=sum+quiet;
       num=quiet;
    }
     printf(" %d (%d)",prime,sum);
 }
int main()
{
    sieve();
    int num,t,n=1;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&num);
     printf("Case %d: %d =",n++,num);
    for(int i=0;prime[i]<=num;i++){
        if(i!=0){
      printf(" *");
      }
        factprime(prime[i],num);
    }
     printf("\n");
    }
    return 0;
}


