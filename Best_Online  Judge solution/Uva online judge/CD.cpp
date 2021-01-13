#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int num1,num2,coun=0;
     while(cin>>num1>>num2){
     if(num1==0 && num2==0){
          return 0;
     }
     else
     {
          for(int i=0;i<num1;i++){ int n;cin>>n;
                    mp[n]=1;
          }
          for(int i=0;i<num2;i++){ int n;cin>>n;
               if(mp[n]==1){
                    coun++;
               }
          }
          cout<<coun<<endl;
          mp.clear();
          coun=0;
     }
     }
     return 0;
}
