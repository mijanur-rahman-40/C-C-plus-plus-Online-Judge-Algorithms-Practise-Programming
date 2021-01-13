#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int num,k,arr[100000];
     map<long int,long int>mp;
     cin>>num>>k;
     for(int i=0;i<num;i++){
          cin>>arr[i];
     }
     sort(arr,arr+num);
     for(int i=0;i<num;i++){
          if(arr[i]%k!=0){
               if(!mp.count(arr[i])){
                    mp[arr[i]]++;
               }
          }
          else{
               if(!mp.count(arr[i]/k)){
                    mp[arr[i]]++;
               }
          }
     }
     cout<<mp.size()<<endl;
return 0;
}
