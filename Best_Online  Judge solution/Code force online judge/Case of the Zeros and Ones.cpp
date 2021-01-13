#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>mp;
     map<char,int>::iterator it;
    string str; int num; cin>>num;
    cin>>str;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }
    int a=0,b=0;
    for(it=mp.begin();it!=mp.end();it++){
        if(it->first=='0'){
            a=it->second;
        }
        else
            b=it->second;
    }

    cout<<abs(a-b)<<endl;
    return 0;
}
