#include<bits/stdc++.h>
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    vector<string>names;
    map<string,long long>wisdom;
    string s;
    long long w;
    while(cin>>s>>w){
        names.push_back(s);
        wisdom[s]=w;
    }
    sort(names.begin(),names.end());
    for(int i=0;i<names.size();i++){
        cout<<names[i]<<" "<<wisdom[names[i]]<<endl;
    }

}
