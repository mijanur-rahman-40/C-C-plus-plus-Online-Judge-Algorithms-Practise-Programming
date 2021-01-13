#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst,j=1;cin>>tst;
     while(tst--){
         int num1,num2;
         cin>>num1>>num2;
         if(num1<=num2){
         cout<<"Case "<<j++<<": "<<num2*4+9+10<<endl;
         }
         else
         cout<<"Case "<<j++<<": "<<(num1-num2+num1)*4+9+10<<endl;
     }
     return 0;
}
