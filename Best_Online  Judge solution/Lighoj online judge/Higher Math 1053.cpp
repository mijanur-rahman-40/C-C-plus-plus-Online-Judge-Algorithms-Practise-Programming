#include<bits/stdc++.h>
using namespace std;
int main()
{

   int long a,b,c;
   int tst,j=1;cin>>tst;
   while(tst--){
     cin>>a>>b>>c;
     if(a*a==b*b+c*c || b*b==a*a+c*c ||c*c==a*a+b*b){
          cout<<"Case "<<j++<<": "<<"yes"<<endl;
     }
     else
          cout<<"Case "<<j++<<": "<<"no"<<endl;
   }
  return 0;
}
