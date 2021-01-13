//may be answer is correct

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;cin>>tst;
    while(tst--){
        map<string,int>mp;
        char str[1000];
        char ch;
         while(scanf("%s%c",str,&ch)){
            mp[str]++;
         if(ch=='\n')
         {
             break;
         }
         }
          map<string,int>::iterator it;
        int sum=0,coun=0;
        for(it=mp.begin();it!=mp.end();it++){
            coun++;
            sum+=it->second;
        }
        mp.clear();
       if(sum%coun==0){
       cout<<"YES"<<endl;
       }
       else
        cout<<"NO"<<endl;
}
}
