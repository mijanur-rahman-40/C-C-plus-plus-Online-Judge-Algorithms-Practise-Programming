#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tst,c,n,s,e,w;
    scanf("%lld",&tst);
    while(tst--){
        scanf("%lld%lld%lld%lld%lld",&c,&n,&e,&s,&w);
        if(c==n || c==e || c==s || c==w){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
