#include<bits/stdc++.h>
using namespace std;
int main()
{
     string str,sum="";
     int tst;
     cin>>tst;while(tst--){
          int num;cin>>num;
          for(int i=0;i<num;i++){
          cin>>str;sum+=str;
          }
          for(int i=0;i<sum.size();i++){
               if(isupper(sum[i])){
                    sum[i]=tolower(sum[i]);
               }
          }
          cout<<sum<<endl;
          sum.clear();
     }
          return 0;
}
