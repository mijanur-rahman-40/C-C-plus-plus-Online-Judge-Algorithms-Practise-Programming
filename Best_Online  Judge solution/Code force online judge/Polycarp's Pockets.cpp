#include<bits/stdc++.h>

using namespace std;
int main()
{
    int num,j;
    cin>>num;

    map<int,int>mp;
    map<int,int>::iterator it;
    for(int i=0; i<num; i++){
        cin>>j;
        mp[j]++;
    }
    int ans = 0;
    for(it=mp.begin(); it!=mp.end(); it++){
        ans = max(ans,it->second);
    }
    cout<<ans<<endl;
}
