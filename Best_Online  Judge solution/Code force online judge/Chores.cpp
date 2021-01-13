#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;
    cin>>n>>k>>x;
    int arr[101];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int sum=0;
    for(int i=0;i<n-k;i++){
        sum+=arr[i];
    }
    cout<<sum+k*x<<endl;

    return 0;
}
