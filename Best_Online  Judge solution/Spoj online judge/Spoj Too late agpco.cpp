#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,c,w,a;
    cin>>t>>b>>c>>w;
   if(b<=t){
    cout<<"Bus"<<endl;
   }
  else if(c<=t){
    cout<<"CNG"<<endl;
   }
  else if(w<=t){
    cout<<"Walk"<<endl;
   }
   else{
   cout<<"Too Late"<<endl;
   }
   return 0;

}
