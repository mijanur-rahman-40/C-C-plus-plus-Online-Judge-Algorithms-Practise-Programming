// A simple C program to calculate Euler's Totient Function
/*
#include <stdio.h>
// Function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a,a);
}

// A simple method to evaluate Euler Totient Function
int phi(unsigned int n)
{
    unsigned int result = 1;
    for (int i=2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}
int main()
{
    int n,m;
    //scanf("%d",&m);
    for (n=1; n<=10; n++)
      printf("phi(%d) = %d\n", n, phi(n));
    return 0;
}

*/
/*
#include<bits/stdc++.h>
using namespace std;
int totient (int i) {
    int ans;
    int j;
    if (i==1) return 1;
        ans=i;
       // Check for divisibility by every prime number below the square root.
        //Start with 2.
        if (i%2==0) {
        ans -= ans/2;
        while (i%2==0) {
            i/=2;
        }
    }

    // Since this doesn't use a list of primes, check every odd number. Ideally, skip past composite numbers.
    for (j=3; j*j<=i; j+=2) {
        if (i%j==0) {
            ans-=ans/j;
            while (i%j==0) {
                i/=j;
            }
        }
    }

    //If i>1, then it's the last factor at this point.
    if (i>1)
        ans -= ans/i;
    return ans;
}

int main() {
    int n;
    printf("A number please: ");
    while(scanf("%d", &n)==1){
    printf("Phi(%d) = %d\n", in, totient(n));
    }
    return 0;
}

*/
/*
//best
#include<bits/stdc++.h>
using namespace std;
const long long maxn=10000002;
bool flag[maxn];
vector<long>primes;
void sieve()
{   flag[0]=1;
    flag[1]=1;
    primes.push_back(2);
    for(long int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    for(long int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
            primes.push_back(i);
        }
        if(maxn/i>=i){
           long  int add=i*2;
            for(long int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}
long long Euolar(long long n) {
  for (long int i =0;i<prime.size();i++) {
    if (n % primes[i] == 0) {
      n-= n/primes[i];
    }
  }
  return n;
}
int main()
{
sieve();
   long long  int  n;
    while(scanf("%lld",&n) && n){
          if(n==1){
               printf("0\n");
          }
          else{
            printf("co prime count %ld\n",Euolar(n));
          }
}
return 0;
}

*/
/*
#include<bits/stdc++.h>
using namespace std;
const int maxn=10000002;
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
int Euolar (int n) {
  int ret= n;
  for (int i=2; i*i<=n; i++) {
    if (n % i == 0) {
      while (n%i == 0) {
        n /=i;
      }
      ret-= ret/i;
    }
} // this case will happen if n is a prime number
  // in that case we won't find any prime that divides n
  // that's less or equal to sqrt(n)

   for (int i=0;i< primes.size();i++) {
     if (n>1 && n==primes[i])
    ret-=ret / n;
}
   return ret;
}

int main()
{
    sieve();
    int  n;
    while(scanf("%d",&n)&& n){
            printf("%d\n",Euolar(n));
}
return 0;
}
*/

//best 1

#include<bits/stdc++.h>
#define MAX 10000005
using namespace std;
int phi[MAX] ;
void sievePHI(){
    for(long long  i=1;i<MAX;i++){
        phi[i]=i;
    }
    for(long long i=2;i<MAX;i++){
        if( phi[i]==i){
            for(long long j = i; j<MAX; j+=i){
                phi[j] =(phi[j]/i)*(i-1) ;
            }
        }
    }
}
int main() {
    sievePHI();
      int num;
         while(scanf("%d",&num) && num){
        printf("phi(%d) = %d\n",num,phi[num]);
    }
    return 0;
}


/*
phi(1) = 1
phi(2) = 1
phi(3) = 2
phi(4) = 2
phi(5) = 4
phi(6) = 2
phi(7) = 6
phi(8) = 4
phi(9) = 6
phi(10) = 4

*/
//this is the best cause ata dara 20 digit porjonto kora jai
/*
#include<bits/stdc++.h>
using namespace std;
long long phi(long long int num)
{
    long long res=0;
   long long j;
 if (num==1)
     return 1;
    res=num;
    if (num%2==0){
    res-=res/2;
    while (num%2==0)
     num/=2;
    }
    for (j=3; j*j<=num; j+=2) {
      if (num%j==0)  {
   res-=res/j;
   while (num%j==0)
    num/=j;
    }
   }
   if (num>1)
     res-=res/num;
   return res;
   }
int main()
{
   long long  num;
    while(scanf("%lld",&num) && num)
    {
       printf("%lld\n",phi(num));
    }
    return 0;
}

*/
