

#include<bits/stdc++.h>
using namespace std;
int arr[1050][1050]={0};
int main()
{
    int n,m,i,k;
    cin>>n>>m>>k;
    int ans=0;
    for( i=1; i<=k; i++){
        int a,b;
        cin>>a>>b;
        arr[a][b]=1;
        if(ans==0){
            if(arr[a-1][b-1]==1 && arr[a-1][b] && arr[a][b-1])
            {
                ans=i;
            }
            if(arr[a-1][b]==1 && arr[a][b+1]==1 && arr[a-1][b+1]==1)
            {
                ans=i;
            }
            if(arr[a][b+1]==1 && arr[a+1][b]==1 && arr[a+1][b+1]==1)
            {
                ans=i;
            }
            if(arr[a][b-1]==1 && arr[a+1][b-1]==1 && arr[a+1][b]==1)
            {
                ans=i;
            }
        }
        /*
        else
        {
            break;
        }
        */
    }
    cout<<ans<<endl;
    return 0;
}



/*
2 3 6
2 3
2 2
1 3
2 2
1 2
1 1
*/






