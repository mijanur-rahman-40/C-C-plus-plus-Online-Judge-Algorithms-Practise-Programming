
#include<bits/stdc++.h>
using namespace std;
long long bigmod(long long a,long long p,long long m){
  if(p==0){
    return 1%m;
  }

  long long int t=bigmod(a,p/2,m);
  //if(p%2==0){
  t=(t*t)%m;
   if(p%2==1){
    t=(t*a)%m;
  }
  return t;
}
/*
#include <stdio.h>
long long bigmod(long long x, long long y, long long m) {
    long long ans = 1, tmp = x;
    while(y) {
        if(y&1) {
            ans *= tmp;
            ans %= m;
        }
        y >>= 1;
        tmp *= tmp, tmp %= m;
    }
    return ans;
}
*/
int main()
{
   long long  a,p,m,t;
    while(scanf("%lld%lld%lld",&a,&p,&m)==3){
    t=bigmod(a,p,m);
    printf("%lld\n",t);
   }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
#define i64 long long
i64 M=5;
i64 F(i64 N,i64 P)
{
	if(P==0) return 1;
	if(P%2==0)
	{
		i64 ret=F(N,P/2);
		return ((ret%M)*(ret%M))%M;
	}
	else return ((N%M)*(F(N,P-1)%M))%M;

}
int main()
{
i64 N,P;
scanf("%i64%i64",&N,&P);
printf("%i64",F(N,P));
return 0;
}
*/
//calculates value of  (a ^ p) % m
//process used : Divide and Conquer
/*
#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
using namespace std;
long long int bigmod ( long long a, int p, int m );
int main(){
    printf("input format...\n (a^p) MOD m\n");
    long long a;
    int p,m;
    printf("enter a : ");
    scanf("%lld",&a);
    printf("\n");
    printf("enter p : ");
    scanf("%d",&p);
    printf("\n");
    printf("enter m : ");
    scanf("%d",&m);
    printf("\n");
    //Calling...
    printf("result is %d\n",bigmod(a,p,m));

    int hold;
    scanf("%lld",&hold);
   return 0;
}

//BIG MODE CODE...
long long int  bigmod ( long long a, int p, int m )
{
    if ( p == 0 )return 1; // If power is 0, then a ^ 0 = 1 for any value of a, And 1 Mod m=1 for any value of m, So return 1

    if ( p % 2 ) // If power is odd, Split it : a ^ 5 =( a )* (a ^ 4) --> left and right child respectively.
    {
        return ( ( a % m ) * ( bigmod ( a, p - 1, m ) ) ) % m;
    }
    else //If power is even then split it equally and return the result...
    {
        long long c = bigmod ( a, p / 2, m );
        return ( (c%m) * (c%m) ) % m;
    }
}
*/

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char bhajjo[1000];
    int i,bhajok,bhagshesh=0;

    scanf("%s",bhajjo);
    scanf("%lld",&bhajok);

   long long  int l=strlen(bhajjo);

    for(i=0; i<l; i++)
    {
        bhagshesh = ((bhagshesh*10) + (bhajjo[i]-'0') )%bhajok; // Amra character theke integer e convert kore nilam '0' biyog kore
    }
    printf("%lld\n",bhagshesh);
    return 0;
}
*/
