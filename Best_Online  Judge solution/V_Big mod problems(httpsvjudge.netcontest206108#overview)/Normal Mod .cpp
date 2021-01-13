#include<bits/stdc++.h>
using namespace std;
#define llu  unsigned long long int
long mod=1000000007;
int main()
{
    llu tst,num;
    scanf("%lld",&tst);
    while(tst--){
          scanf("%llu",&num);
    llu ans=0;
    for(int i=0;i<num;i++){
          llu j;
    scanf("%llu",&j);
    ans=((ans%mod)+(j%mod))%mod;
    }
     printf("%llu\n",ans);
    }
    return 0;
}
