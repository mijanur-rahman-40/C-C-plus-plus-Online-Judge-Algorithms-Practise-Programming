#include<bits/stdc++.h>
using namespace std;
int main()
{
     int len,tst;
     string str;
     cin>>len>>tst>>str;
     int flag=0;
     while(tst--){
          for(int i=0;i<len;i++)
          {
               if(str[i]=='B' && str[i+1]=='G'){
                   swap(str[i],str[i+1]);
                   if(flag==1){
                   i=i+1;
                   flag=0;
                   }
                   else{
                         if(i==0)
                    i=i+2;
                   else
                    i=i+1;
                   }
               }
              else
               flag=1;
          }
     }
     cout<<str<<endl;
     return 0;
}
