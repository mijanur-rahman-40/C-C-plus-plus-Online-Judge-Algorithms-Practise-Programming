#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,j;
    map<int,int>mp;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>j;
        mp[j]++;
    }
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second%2==1){
            cout<<"Conan"<<endl;
            return 0;
        }
    }
            cout<<"Agasa"<<endl;
            return 0;
    }


