#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
  int num;
    cin>>num;cin>>str;
    map<int,int>mp;
    int y=0,x=0,ans=0;
    mp[0]=-1;
    for(int i=0;i<str.size();i++){
        if(str[i]=='1')
        {
            x++;
        }
        else
        {
            y++;
        }
        if(mp.count(x-y))
        {
            ans=max(ans,i-mp[x-y]);
        }
        else
        {
            mp[x-y]=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}

/*
8
11010111
*/
