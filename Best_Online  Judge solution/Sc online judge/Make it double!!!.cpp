#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   cin>>str;
   if(str[0] == str[str.size()-1]){
        cout<<str;
    for(int i=1; i<str.size(); i++){
        cout<<str[i];
    }
    cout<<endl;
   }
   else
    cout<<str+str<<endl;
   return 0;
}
