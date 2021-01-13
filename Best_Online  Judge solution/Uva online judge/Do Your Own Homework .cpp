
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst,j=1;cin>>tst;
     while(tst--){
          map<string,int>mp;
          string str;int num;cin>>num;
          for(int i=0;i<num;i++){
                    int value;
               cin>>str>>value;
          mp[str]=value;
          }
          string str1;int num1;
          cin>>num>>str1;int sum=0;
           sum=5+num;
          if(mp.count(str1) && mp[str1]<=num){
               printf("Case %d: Yesss\n",j++);
          }
          else if(mp.count(str1) && mp[str1]<=sum){
               printf("Case %d: Late\n",j++);
          }
         else {
               printf("Case %d: Do your own homework!\n",j++);
          }
     }
     return 0;
}
