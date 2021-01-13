#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst;
     cin>>tst;
     while(tst--){
          int num,mx=0,mn=564764533;
          cin>>num;
          for(int i=0;i<num;i++){
               int j;cin>>j;
               mx=max(mx,j);
               mn=min(mn,j);
          }
          cout<<mx-mn<<endl;
     }
     return 0;
}
xor
