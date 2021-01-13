#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num;cin>>num;
     int arr[100];
     for(int i=0;i<num;i++){
          cin>>arr[i];
     }
     sort(arr,arr+num);
     int m=num/2+1;int sum=0;
     for(int i=0;i<m;i++){
          sum+=arr[i]/2+1;
     }
     cout<<sum<<endl;
     return 0;
}
