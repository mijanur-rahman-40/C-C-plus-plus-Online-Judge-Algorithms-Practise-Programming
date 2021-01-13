
#include<bits/stdc++.h>
using namespace std;
long long int arr[100005],dp[100005];
int main()
{
    long long int n;
    cin>>n;
    for(int i=0;i<n;i++){
            int j;
        cin>>j,arr[j]++;
    }
    dp[0]=0;
    dp[1]=arr[1];
    for(int i=2;i<100001;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+i*arr[i]);
    }
    cout<<dp[100000];
    return 0;
 }
