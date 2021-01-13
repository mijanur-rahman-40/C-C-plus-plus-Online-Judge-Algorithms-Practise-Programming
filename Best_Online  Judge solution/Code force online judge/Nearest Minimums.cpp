

#include<bits/stdc++.h>
using namespace std;
int arr[100010];
int mi=1e9+9,ans=1e9+9,mx=-1e9+9;
int main()
{
     int  num;
     cin>>num;
     for(int i=0;i<num;i++){
          cin>>arr[i];
          mi=min(mi,arr[i]);
     }
     for(int i=0;i<num;i++){
          if(arr[i]==mi){
             ans=min(ans,i-mx);
             //cout<<ans<<" ";
             mx=i;
          }
     }
     cout<<ans<<endl;
}













































