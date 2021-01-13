#include <bits/stdc++.h>
#define maxn 1000050
#define inf 0x3f3f3f3f
using namespace std;
typedef long long ll;
int a[maxn];
int pre[maxn];
int n,m,w;
int check(int mid){
    memset(pre,0,sizeof(pre));
    int tot=0;
    for(int i=1;i<=n;i++){
        pre[i]+=pre[i-1];
        int cnt=mid-a[i]-pre[i];
        if(cnt>0){
            tot+=cnt;
            if(tot>m) return 0;
            pre[i]+=cnt;
            pre[w+i]-=cnt;
        }
    }
    return 1;
}
int main()
{
    while(scanf("%d %d %d",&n,&m,&w)==3){
        int L=inf,R=0;
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
            L=min(L,a[i]);
            R=max(R,a[i]);
        }
        R+=m;
        int ans=L;
        while(L<=R){
            int mid=(L+R)>>1;
            if(check(mid)){
                ans=mid;
                L=mid+1;
            }
            else R=mid-1;
        }
        printf("%dn",ans);
    }
}

