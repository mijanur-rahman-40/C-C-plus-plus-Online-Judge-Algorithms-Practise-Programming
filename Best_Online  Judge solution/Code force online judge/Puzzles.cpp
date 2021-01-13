#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int arr[51];
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+m+1);
//    for(int i=1;i<=m;i++){
//        cout<<arr[i]<<" ";
//    }
    int mx=0,mn=10000,mn1=10000,mn2=10000;
    for(int i=1;i<=m-n+1;i++){
        for(int j=i;j<n+i;j++){
            mx=max(arr[j],mx);
            mn=min(arr[j],mn);
        }
         mn1=min(mx-mn,mn1);
         mn2=min(mn2,mn1);
        //cout<<mn1<<" "<<mn2<<endl;
       mx=0,mn=10000,mn1=10000;
    }
    cout<<mn2<<endl;
    return 0;
}
/*
4 6
10 12 10 7 5 22

2 10
4 5 6 7 8 9 10 11 12 12
*/
