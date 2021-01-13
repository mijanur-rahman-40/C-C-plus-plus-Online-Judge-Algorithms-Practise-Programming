#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2;
     while(cin>>num1>>num2){
   long long int sum,temp=0;
     sum=num2;
     for(int i=0;i<num1;i++){
          char ch; int nm;
          cin>>ch>>nm;
          if(ch=='+'){
               sum+=nm;
          }
          else
          if(sum>=nm){
               sum-=nm;
          }
          else
               temp++;
     }
     cout<<sum<<" "<<temp<<endl;
     temp=0;
     }
     return 0;
}
