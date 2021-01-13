#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j,mod=1000000007;
ll arr[100010],sum[100010];
int main()
{
    ll tst,cas=1;
    scanf("%lld",&tst);
    while(tst--)
    {
        ll num,q;
        scanf("%lld%lld",&num,&q);
        for(i=1;i<=num; i++)
            scanf("%lld",&arr[i]);
        ll tmp=0;
        for(i=1;i<=num;i++){
            tmp=(tmp+arr[i])%mod;
            sum[i]=tmp;
        }
        ll res;
        printf("Case %lld:\n",cas++);
        while(q--)
        {
            char ch;
            ll x,y;
            scanf(" %c",&ch);
            scanf("%lld %lld",&x,&y);
            if(ch=='+')
            {
                res=(sum[y]-sum[x-1])%mod;
               if(res<0)
                   res+=mod;
                printf("%lld\n",res);
            }
            else
            {
                res=(arr[x]-arr[y])%mod;
                if(res<0)
                    res+=mod;
                printf("%lld\n",res);
            }
        }
    }
}
