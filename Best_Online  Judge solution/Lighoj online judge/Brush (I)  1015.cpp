#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst,num,k=1;int arr[1000];
     cin>>tst;
     while(tst--){
         cin>>num;int sum=0;
         for(int i=0;i<num;i++){
          int j;cin>>j;
          if(j>=0){
             sum+=j;
          }
         }
          cout<<"Case "<<k++<<": "<<sum<<endl;
     }
     return 0;
}
