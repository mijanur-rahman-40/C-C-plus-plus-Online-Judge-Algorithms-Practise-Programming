#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    mp['a']=1;
    mp['e']=1;
    mp['i']=1;
    mp['o']=1;
    mp['u']=1;
    mp['y']=1;
    string str;
    int num;
    cin>>num>>str;
    cout<<str[0];
     for(int i=1; i<str.size(); i++){
        if(mp[str[i]]==1 && mp[str[i-1]]==1){
            continue;
        }
        cout<<str[i];
     }
    return 0;
}
