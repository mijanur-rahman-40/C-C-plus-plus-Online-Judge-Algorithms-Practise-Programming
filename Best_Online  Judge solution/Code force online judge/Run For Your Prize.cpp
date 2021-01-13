#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;cin>>num;
    int ans=0;
    for(int i=0; i<num; i++){
        int n;
        cin>>n;
        ans=max(ans,min(n-1,1000000-n));
    }
    cout<<ans<<endl;
}
