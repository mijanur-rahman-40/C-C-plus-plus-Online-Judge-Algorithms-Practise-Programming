#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num,a,b;
     cin>>num;
 for(int i=1;i<=num;i++){
   for(int j=1;j<=num;j++){
     if(i%j!=0 && i+j==num && i<j){
          if(i%2!=0 || j%2!=0){
          a=i;b=j;
          break;
            }
           }
          }
      }
      cout<<a<<" "<<b<<endl;
     return 0;
}
