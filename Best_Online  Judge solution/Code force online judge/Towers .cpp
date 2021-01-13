#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    map<int,int>::iterator it;
    int num;cin>>num;
    for(int i=0;i<num;i++){
          int j;cin>>j;
     mp[j]++;
    }
    int sum=0,mx=0;
    for(it=mp.begin();it!=mp.end();it++){
     sum++;
     mx=max(mx,it->second);
    }
    cout<<mx<<" "<<sum<<endl;
    return 0;
}
