#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
map<int,int>:: iterator it;
bool coun_indivi(int n){
    string str;
    str=to_string(n);
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }
    int coun=0;
    for(it=mp.begin();it!=mp.end();it++){
        coun++;
    }
      mp.clear();
      str.clear();
if(coun==4){
    return true;
}
else{
   return  false;
}
}
int main()
{
    int num;
    cin>>num;
    num=num+1;
    for(int i=num;i<=9012;i++){
        if(coun_indivi(i)==1){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
