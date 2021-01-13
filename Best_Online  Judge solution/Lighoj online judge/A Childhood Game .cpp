#include<bits/stdc++.h>
using namespace std;
int main()
{
     string str,str1="Alice",str2="Bob";
     int tst,j=1,num;
     cin>>tst;
     while(tst--){
          cin>>num>>str;
          if(str==str1){
               if(num%3==1){
                    cout<<"Case "<<j++<<": "<<str2<<endl;
               }
               else
            {
                cout<<"Case "<<j++<<": "<<"Alice"<<endl;
            }
          }
          if(str==str2){
               if(num%3==0){
                    cout<<"Case "<<j++<<": "<<str1<<endl;
               }
               else
            {
                cout<<"Case "<<j++<<": "<<"Bob"<<endl;
            }
          }
     }
     return 0;
}
