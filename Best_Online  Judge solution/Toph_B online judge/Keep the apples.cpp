#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,app,sum=0;
    cin>>num>>app;
    for(int i=0;i<num;i++){
     int n;cin>>n;
     sum+=n;
    }
    int ans=sum/app;
    if(sum%app==0){
     cout<<ans<<endl;
    }
    else
     cout<<ans+1;
    return 0;
}
