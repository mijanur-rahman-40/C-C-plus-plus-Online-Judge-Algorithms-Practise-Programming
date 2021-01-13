#include<bits/stdc++.h>
using namespace std;
int coun[1052];
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    for(int i=1; i<=m; i++){
        int k; cin>>k;
        coun[k]++;
    }
    int mn = INT_MAX;
    for(int i=1; i<=n; i++){
        mn = min(mn,coun[i]);
    }
    cout<<mn<<endl;
}
