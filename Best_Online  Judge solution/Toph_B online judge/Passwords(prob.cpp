

#include<bits/stdc++.h>
using namespace std;
int coun1=0,coun2=0,coun3=0;
int main()
{
     string str;
     while(cin>>str){
     for(int i=0;i<str.size();i++){
          if(isdigit(str[i])){
               coun1++;
          }
         else if(isupper(str[i])){
              coun2++;
          }
         else if(islower(str[i])){
               coun3++;
          }
     }
          int mn=min(coun1,coun2);
         int  ans=min(mn,coun3);
     cout<<ans<<endl;
     ans=0;
     coun1=0,coun2=0,coun3=0;
     }
     return 0;
}
