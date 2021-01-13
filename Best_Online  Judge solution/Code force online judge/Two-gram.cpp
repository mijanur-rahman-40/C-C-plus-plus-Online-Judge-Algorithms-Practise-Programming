#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,temp,len;
    cin>>len>>str;
    map<string,int>mp;
    for(int i=0; i<str.size()-1; i++){
           temp = str.substr(i,2);
        mp[temp]++;
    }
    map<string,int>::iterator it;
    int mx = 0;
    string str1;
    for(it=mp.begin(); it!=mp.end(); it++){
        if(mx<it->second){
            str1 = it->first;
            mx = it->second;
        }
    }
  cout<<str1<<endl;
return 0;
}
