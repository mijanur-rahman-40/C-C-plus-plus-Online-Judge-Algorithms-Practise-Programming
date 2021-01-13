#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    map<string,int> mp;
    map<string,int>::iterator it;
      cin>>num;
    mp.clear();
    while(num--){
        string str;
           cin>>str;
        mp[str]++;
    }
    int max=0;
    string ans;
    for(it=mp.begin();it!=mp.end();++it){
        int num = it->second;
        if(max<num){
            max=num;
            ans=it->first;
        }
    }
    cout<<ans<<endl;
    return 0;
}

