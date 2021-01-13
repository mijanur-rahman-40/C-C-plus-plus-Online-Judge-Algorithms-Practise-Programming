#include<bits/stdc++.h>
using namespace std;
int main()
{
     string str;
     cin>>str;int coun=0;
     for(int i=0;i<str.size();i++){
          if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
               coun++;
          }
          if((str[i]-'0')%2==1 && isdigit(str[i])){
               coun++;
          }
     }
     cout<<coun<<endl;
     return 0;
}
