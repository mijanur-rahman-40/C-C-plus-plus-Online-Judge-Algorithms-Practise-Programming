#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--){
        int n,k;
        scanf("%d%d",&n,&k);
        long ans=(n*(n+1)/2)+(n-1)*k;
        printf("%ld\n",ans);
    }
    return 0;
}
