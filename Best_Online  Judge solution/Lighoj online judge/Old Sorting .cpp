#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,j=1;cin>>tst;
    while(tst--){
    int arr[101];
    int num; cin>>num;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    pair<int ,int>pai[num];
    for(int i=0;i<num;i++){
        pai[i].first=arr[i];
        pai[i].second=i;
    }
    sort(pai,pai+num);
    vector<bool>vis(num,false);
    int ans=0;
    for(int i=0;i<num;i++){
        if(vis[i] || pai[i].second==i)
        {
            continue;
        }
        int cycle_size=0;
        int j=i;
        while(vis[j]==false)
        {
            vis[j]=1;
            j=pai[j].second;
            cycle_size++;
        }
        ans+=(cycle_size-1);
    }
    cout<<"Case "<<j++<<": "<<ans<<endl;
    }
    return 0;
}
