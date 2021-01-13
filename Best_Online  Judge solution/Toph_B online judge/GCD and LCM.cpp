#include<bits/stdc++.h>
using namespace std;
int main()
{
   int tst;
     long a,b;cin>>tst;
     while(tst--){
          cin>>a>>b;
          if(__gcd(a,b)==1){
               cout<<"yes"<<endl;
          }
          else
               cout<<"no"<<endl;
     }
     return 0;
}
