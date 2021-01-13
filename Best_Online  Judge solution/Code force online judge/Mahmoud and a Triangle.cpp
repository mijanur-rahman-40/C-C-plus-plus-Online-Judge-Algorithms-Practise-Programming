#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=n; i>2; i--){
   if( arr[i-2] + arr[i-3]> arr[i-1] ){
    cout<<"YES"<<endl;
    return 0;
      }
   }
    cout<<"NO"<<endl;
    return 0;
}
