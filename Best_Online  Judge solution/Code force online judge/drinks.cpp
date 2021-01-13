#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,sum=0;
    double t,t1;
   cin>>t; t1=t;
    while(t--){
        scanf("%d",&j);
        sum+=j;
    }
    double ans=(1.0*sum)/(1.0*t1);
    cout<<setprecision(12)<<ans<<endl;
    return 0;
}
