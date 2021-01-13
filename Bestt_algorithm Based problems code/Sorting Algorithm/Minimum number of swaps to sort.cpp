
//source geeks for geeks
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
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
/*
    for(int i=0;i<num;i++){
        cout<<pai[i].first<<" "<<pai[i].second<<endl;
    }
    */
    vector<bool>vis(num,false);
    int ans=0;
    for(int i=0;i<num;i++){
            //cout<<pai[i].second<<endl;
        if(vis[i] || pai[i].second==i)
        {
            continue;
        }
        int cycle_size=0;
        //cout<<"i ="<<i<<endl;
        int j=i;
        while(vis[j]==false)
        {
            vis[j]=1;
            j=pai[j].second;
            cycle_size++;
            //cout<<"Cy "<<cycle_size<<" "<<j<<endl;
        }
        ans+=(cycle_size-1);
    }
    cout<<ans<<endl;
    return 0;
}
/*
4
4 2 3 1
1 3
2 1
3 2
4 0

Cy 1 3
Cy 2 0
1
*/

