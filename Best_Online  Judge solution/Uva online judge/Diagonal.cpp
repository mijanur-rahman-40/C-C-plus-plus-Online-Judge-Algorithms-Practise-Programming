#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll ans,n,cas=1;
    double num;
    while(cin>>n && n)
    {
        num = (3.0 + sqrt( 9.0 + (n*8.0)))/2.0;
        ans=num;
        if(ans!=num){
            ans++;
        }
        cout<<"Case "<<cas++<<": "<<ans<<endl;
    }

return 0;
}

