

#include<bits/stdc++.h>
using namespace std;
/*
bool sortinrev(const pair<long,long> &a,const pair<long,long> &b)
{
    return a.second<b.second;
}
*/
int ar[101]={0};
int main()
{
   long int n,m;
    cin>>n>>m;
   long int arr[m+2][n+2];
    for(int i=1; i<=m; i++ ){
        for(int j=1; j<=n; j++){
            cin>>arr[i][j];
        }
    }
    //pair<long,long>pai[m+1];
    for(int i=1; i<=m; i++ ){
        int mx=-10; int ind;
        for(int j=1; j<=n; j++){
          if(mx<arr[i][j]){
            mx=arr[i][j];
            ind =j;
          }
        }
       //pai[i-1].first=mx;
       //pai[i-1].second=ind;
       ar[ind]++;
    }
/*
    sort(pai,pai+m,sortinrev);
            cout<<pai[0].second<<endl;
*/
            int mx=-1;
            int ans=1;
            for(int i=1; i<=n; i++){
                if(ar[i]>mx){
                    ans=i;
                    mx=ar[i];
                }
            }
            cout<<ans;
return 0;
}
/*
3 3
1 2 3
5 2 1
1 2 3



3 4
5 1 6
10 10 3
2 2 2
1 5 7
*/
