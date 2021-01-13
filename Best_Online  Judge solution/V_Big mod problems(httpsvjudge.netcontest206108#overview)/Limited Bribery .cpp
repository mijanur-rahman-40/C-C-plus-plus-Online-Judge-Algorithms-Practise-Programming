
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
long mod=1000000007;
int main()
{
    ll tst,num;
    scanf("%lld",&tst);
    while(tst--){
    scanf("%lld",&num);
      num=num%mod;
      if(num==0)
    printf("1\n");
    else
     printf("%lld\n",num);
    }
    return 0;
}
