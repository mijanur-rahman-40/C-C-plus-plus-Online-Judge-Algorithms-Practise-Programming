#include<bits/stdc++.h>
using namespace std;
int main()
{
     map<char,int>mp;
     map<char,int>::iterator it;
     string str;int len;
     cin>>str>>len;
     if(len>str.size()){
          cout<<"impossible"<<endl;
          return 0;
     }
     else{
     for(int i=0;i<str.size();i++){
          mp[str[i]]++;
     }
     }
     int coun=0;
     for(it=mp.begin();it!=mp.end();it++){
          coun++;
     }
     if(coun==len || coun>len){
          cout<<"0"<<endl;
     }
     else
          cout<<len-coun<<endl;
     return 0;
}
