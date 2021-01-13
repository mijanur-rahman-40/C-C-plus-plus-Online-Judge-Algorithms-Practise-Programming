#include<bits/stdc++.h>
using namespace std;
int arr[1010];
int main()
{
    int n,l;
    cin>>n>>l;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    double ans=0;
    for(int i=0;i<=n;i++)
    {
        ans=max(ans,(arr[i+1]-arr[i])/2.0);
    }

    ans=max(ans,(double)arr[0]);
    ans=max(ans,(double)l-arr[n-1]);
    cout<<setprecision(10)<<ans<<endl;
    }
