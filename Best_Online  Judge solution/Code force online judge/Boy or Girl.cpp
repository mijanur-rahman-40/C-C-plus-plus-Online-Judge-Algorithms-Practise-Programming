#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    map<char,int>mp;
    cin>>str;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }
    int coun=0;
    map<char,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        coun++;
    }
    if(coun%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    cout<<"IGNORE HIM!"<<endl;
    return 0;
}
