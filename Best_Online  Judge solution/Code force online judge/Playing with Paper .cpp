#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,ans=0,mod=1,div;
    cin>>a>>b;
   if(a%b==0){
    cout<<a/b<<endl;
   }
   else{
       while(mod!=0){
         div=a/b;
         ans+=div;
         mod=a%b;
         a=b;
         b=mod;
   }
   cout<<ans<<endl;
   }
   return 0;
}
