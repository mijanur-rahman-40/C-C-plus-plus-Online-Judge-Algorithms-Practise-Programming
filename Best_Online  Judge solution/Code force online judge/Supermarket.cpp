#include<bits/stdc++.h>
using namespace std;
int main()
{
//    int n,m; float mn=100;
//    cin>>n>>m;
//    for(int i=0;i<n;i++){
//        int a,b;
//        cin>>a>>b;
//        float ans;
//        ans=(float)a/(float)b;
//        mn=min(mn,ans);
 int n,m; double mn=100;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        double ans;
        ans=(double)a/(double)b;
        mn=min(mn,ans);
    }
    //printf("%.8f\n",mn*(float)m);
    cout<<setprecision(10)<<mn*(double)m<<endl;
}
