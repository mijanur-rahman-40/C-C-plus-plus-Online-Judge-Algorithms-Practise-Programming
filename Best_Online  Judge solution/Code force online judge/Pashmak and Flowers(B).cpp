#include<bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;
int main()
{
    long long int num;
      int arr[200005];
     int mx=0,mn=INF;
     cin>>num;
     for(int i=0;i<num;i++){
          cin>>arr[i];
          mx=max(mx,arr[i]);
          mn=min(mn,arr[i]);
     }
    long long int ans=mx-mn;
    long long int coun1=0,coun2=0;
     if(ans==0){
          cout<<ans<<" "<<num*(num-1)/2<<endl;
     }
     else{
     for(int i=0;i<num;i++){
               if(arr[i]==mn){
                    coun1++;
               }
    // }
               //for(int i=0;i<num;i++){
           if(arr[i]==mx){
                    coun2++;
          }
               }
          cout<<ans<<" "<<(coun1*coun2)<<endl;
     }
     return 0;
}
