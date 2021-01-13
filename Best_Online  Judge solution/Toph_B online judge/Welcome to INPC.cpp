#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst;cin>>tst;
     while(tst--){
          string str;cin>>str;
          str[0]=toupper(str[0]);
          cout<<"Welcome"<<" "<<str<<endl;
          str.clear();
     }
     return 0;
}
