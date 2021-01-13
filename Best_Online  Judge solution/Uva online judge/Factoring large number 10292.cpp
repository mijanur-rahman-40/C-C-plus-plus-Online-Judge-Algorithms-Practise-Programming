
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

        for (int i = 0; i <prime.size(); i++){
            while (num% prime[i] == 0){
                printf("    %d\n",prime[i]);
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
/*
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int prime[80000];
    int nOfprime = 2;
    prime[0] = 2;
    prime[1] = 3;
    for (int i = 5, gap = 2; i <= 1000000; i += gap, gap = 6-gap){
        int sqrt_i = sqrt(i);
        bool isPrime = 1;
        for (int j = 1; prime[j] < sqrt_i; j++){
            if (i % prime[j] == 0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            prime[nOfprime++] = i;
    }

    long long int N;
    while (scanf("%lld",&N)){
        if (N < 0) break;

        for (int i = 0; i < nOfprime; i++){
            while (N % prime[i] == 0){
                printf("    %d\n",prime[i]);
                N /= prime[i];
            }
            if (N == 1) break;
        }
        if (N != 1) printf("    %lld\n",N);
        printf("\n");
    }
    return 0;
}
*/
