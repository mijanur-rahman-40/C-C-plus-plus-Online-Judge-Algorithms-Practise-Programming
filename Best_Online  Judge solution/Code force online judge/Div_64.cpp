#include<bits/stdc++.h>
using namespace std;
int main()
{
     string str;int coun1=0,coun2=0,flag=0,coun3=0;
     cin>>str;
     for(int i=0;i<str.size();i++){
           if(str[i]=='0'){
               coun1++;
               if(flag==0){
                    coun3++;
               }
          }
       else if(str[i]=='1'){
               coun2++;
               flag=1;
          }
     }
     if(coun1-coun3>=6 && coun2>=1){
          cout<<"YES"<<endl;
     }
     else
          cout<<"NO"<<endl;
     return 0;
}
