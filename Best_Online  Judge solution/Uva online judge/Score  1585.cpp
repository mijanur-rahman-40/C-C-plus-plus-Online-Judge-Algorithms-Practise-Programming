#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int tst,coun=0,sum=0;
    cin>>tst;
    while(tst--){
     cin>>str;
     for(int i=0;i<str.size();i++){
          if(str[i]=='O'){
          coun=coun+1;
          sum+=coun;
     }
     else{
          coun=0;
     }
     }
     cout<<sum<<endl;
     sum=0;
     coun=0;
    }
    return 0;
}
