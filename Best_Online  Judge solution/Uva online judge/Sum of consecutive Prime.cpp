
#include<bits/stdc++.h>
using namespace std;
const int maxn=10050;
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
int main()
{
     sieve();
     int num,sum;
     while(scanf("%d",&num)==1 && num){
      int count=0;
        for(int i=0;i<prime.size();i++){
        int sum=0;
       for(int j=i;j<prime.size();j++){
      sum = sum +prime[j];
       if(sum==num){
      count++;
      }
    if(sum>=num)
  break;
    }
     }
      printf("%d\n",count);
}
return 0;
}
