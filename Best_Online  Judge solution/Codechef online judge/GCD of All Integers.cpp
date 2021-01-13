#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long  tst;
    cin>>tst;
    while(tst--){
            ll i;
        ll n;
        scanf("%lld",&n);
        ll arr[100000];
        for( i=0;i<n;i++){
            scanf("%lld",&arr[i]);
        }
       ll gcd=arr[0];
        for( i=1;i<n;i++){
            gcd=__gcd(gcd,arr[i]);
        }
        if(gcd==1){
            printf("%lld\n",n);
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}
