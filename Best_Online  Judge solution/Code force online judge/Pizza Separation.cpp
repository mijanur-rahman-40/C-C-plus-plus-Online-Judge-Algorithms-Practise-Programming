#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[1000];int num;
     cin>>num;
     for(int i=0;i<num;i++){
          cin>>arr[i];arr[num+i]=arr[i];
     }
     int ans=360;
     for(int i=0;i<num;i++){
          int temp=0;
          for(int j=i;j<num*2;j++){
                    temp+=arr[j];
               ans=min(ans,abs(360-2*temp));
          }
     }
     cout<<ans<<endl;
     return 0;
}
