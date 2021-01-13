#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<string>vec;
     map<string,int>mp;
     int tst;string st;
     scanf("%d",&tst);
     while(tst--){
     cin>>st;
          vec.push_back(st);
     }
    for(int i=vec.size()-1;i>=0;i--){
     if(mp.count(vec[i])==0){
          cout<<vec[i]<<endl;
          mp[vec[i]]=1;
     }
}
return 0;
}















     /*
     map<string,int>mp;
    map<string,int>::iterator it;
     int num;
     scanf("%d",&num);
     while(num--){
          string st;
          cin>>st;
          mp[st]++;
     }
     for(it=mp.begin(); it!=mp.end();it++){
          cout<<it->first<<endl;
     }
     return 0;
}
*/
