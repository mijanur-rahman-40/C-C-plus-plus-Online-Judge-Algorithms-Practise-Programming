#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    map<char,int>mp;
    map<char,int >::iterator it;
    getline(cin,str);  int flag=1;
    for(int i=0;i<str.size();i++){
        if(str[i]==' ' || str[i]==',' || str[i]=='{' || str[i]=='}'){
            flag=0;
           }
          else{
          mp[str[i]]++;
          }
    }
    int coun=0;
    for(it=mp.begin();it!=mp.end();it++){
            coun++;
    }
    cout<<coun<<endl;
}
