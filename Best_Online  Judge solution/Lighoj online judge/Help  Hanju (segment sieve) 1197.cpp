//Segment sieve age buja neo
/*

#include<bits/stdc++.h>
using namespace std;
const int maxn=10000000;
bool flag[maxn];
int arr[maxn];
vector<int>prime;
void sieve()
{
    flag[1]=1;
   arr[2]=0;
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
    int primenum(int a,int b){

         for(int a==)




        }
int main()
{
     sieve();
     long  int a,b,tst,j=1;
     scanf("%ld",&tst);
     while(tst--){
       scanf("%ld%ld",&a,&b);
      int con1=primenum(a,b);
          }
     printf("Case %d: %d\n",j++,con1);
     }
     return 0;
}
*/
#include <stdio.h>

int isPrime(int num);
void printPrimes(int lowerLimit, int upperLimit);
int main()
{
   long  int lowerLimit, upperLimit;

    printf("Enter the lower and upper limit to list primes: ");
    scanf("%ld%ld", &lowerLimit, &upperLimit);
    printPrimes(lowerLimit, upperLimit);

    return 0;
}
void printPrimes(int lowerLimit, int upperLimit)
{
    printf("All prime number between %d to %d are: ", lowerLimit, upperLimit);

    while(lowerLimit <= upperLimit)
    {
        if(isPrime(lowerLimit))
        {
            printf("%d, ", lowerLimit);
        }

        lowerLimit++;
    }
}

int isPrime(int num)
{
    int i;

    for(i=2; i<=num/2; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
/*
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<cmath>
  using namespace std;

#define maxn 50000
  int vis[maxn], isprime[5200], num[100005], k;
 void prime()
 {
     long long i, j;
     for (k=0,i=2; i<maxn; i++)
         if (vis[i] == 0)
        {
             isprime[k ++] = i;
             for (j=i*i; j<maxn; j+=i)
                 vis[j] = 1;
         }
     //printf ("%lld\n", k);
 }

 int main ()
 {
     int t, l = 1;
     prime ();
     scanf ("%d", &t);
    while (t --)
     {
        int a, b, ans = 0;
       int n;
         scanf ("%d %d", &a, &b);
         n = b - a;
         memset (num, 0, sizeof(num));
         for (int i=0; isprime[i]<=(int)sqrt(b)&& i<k; i++)
         {
            int j = 0;
            if (a % isprime[i] != 0 )
                j = j - a % isprime[i] + isprime[i];
            if (a <= isprime[i])
                 j += isprime[i];
            for ( ; j<=n; j+=isprime[i])
             {
                     num[j] = 1;
             }
         }
         for (int i=0; i<=n; i++)
             if (!num[i])
             ans ++;
         if (a == 1)
             ans --;
         printf ("Case %d: %d\n", l ++, ans);
     }
     return 0;
 }
*/
