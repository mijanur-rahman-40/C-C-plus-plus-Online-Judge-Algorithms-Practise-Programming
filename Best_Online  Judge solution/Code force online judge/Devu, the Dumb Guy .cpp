
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int arr[100050];
     int n,x;cin>>n>>x;
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     sort(arr,arr+n);
    long long int sum=0;
     for(int i=0;i<n;i++){
          sum+=arr[i]*max(x-i,1);
     }
     cout<<sum<<endl;
     return 0;
}
