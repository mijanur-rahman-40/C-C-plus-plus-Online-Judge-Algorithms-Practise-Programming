

#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   cin>>str;
   bool flag = false;
   for(int i=0; i<str.size(); i++){
    if( str[i] == '0' || str[i] == '8'){
        cout<<"YES"<<endl<<str[i];
        flag = true;
        return 0;

    }
    for(int j = i+1; j<str.size(); j++){
        if( (str[i]*10 - '0' + str[j] - '0') % 8 == 0){
            cout<<"YES"<<endl;
            cout<<str[i]<<str[j]<<endl;
           flag = true;
           return 0;
        }

    for(int k = j+1; k<str.size(); k++){
        if( (str[i]*100 - '0' + str[j]*10 - '0' + str[k] - '0') % 8 == 0){
            cout<<"YES"<<endl;
            cout<<str[i]<<str[j]<<str[k]<<endl;
           flag = true;
            return 0;
         }
       }
     }
   }
    if(!flag) cout<<"NO"<<endl;
}
