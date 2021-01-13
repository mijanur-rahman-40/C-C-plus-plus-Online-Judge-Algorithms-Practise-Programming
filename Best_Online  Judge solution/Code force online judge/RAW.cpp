#include<bits/stdc++.h>
using namespace std;

int main()
{
   int len;
   string str;
   cin>>len>>str;
   for(int i=0; i<len-1; i++){
    if(str[i] == '1' and str[i+1] == '1'){
        cout<<"No"<<endl;
        return 0;
      }
   }
    if(len == 1  and str[0] == '0'){
        cout<<"No"<<endl;
        return 0;
    }
    if(len>1 and str[0] == '0' and str[1] == '0'){
        cout<<"No"<<endl;
        return 0;
    }
    if(len>1 and str[len-1] == '0' and str[len-2] == '0'){
        cout<<"No"<<endl;
        return 0;
    }
   for(int i=0; i<len-2; i++){
    if(str[i] == '0' and str[i+1] == '0' and str[i+2] == '0'){
        cout<<"No"<<endl;
        return 0;
    }
   }
   cout<<"Yes"<<endl;
   return 0;
}
