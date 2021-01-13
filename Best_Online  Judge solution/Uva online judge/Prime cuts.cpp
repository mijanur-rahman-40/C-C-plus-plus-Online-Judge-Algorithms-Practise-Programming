#include<bits/stdc++.h>
using namespace std;
const int maxn=10005;
bool flag[maxn];
vector<int >prime;
vector<int>prime1;
void sieve()
{    prime.push_back(1);
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
     int  n,m;
     while(scanf("%d %d",&n,&m)==2){
     prime.clear();
     prime1.clear();
     printf("%d %d:",n,m);
     for(int i=0;i<=n;i++){
               if(n>=prime[i]){
         prime1.push_back(prime[i]);
     }
     }
     int siz=prime1.size();
      if(n==1){
          printf(" 1");
      }
     else if(n==m || siz<m*2 || siz<(m*2)-1){
          for(int i=0;i<siz;i++){
               printf(" %d",prime[i]);
          }
     }
     else{
     if(siz%2==0){
    int  a2=m*2;
    int b1=siz-a2;
    int c1=b1/2;
    int d1=c1+(a2-1);
    for(int i=c1;i<=d1;i++){
     printf(" %d",prime[i]);
    }
     }
     else{
          int a2=m*2-1;
          int b2=siz-a2;
          int c2=b2/2;
          int d2=c2+a2;
          for(int i=c2;i<d2;i++){
                printf(" %d",prime[i]);
          }
     }
     }
     printf("\n\n");
     }
     return 0;
}
