#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[102];
    for(int i=0; i<102; i++){
        arr[i]=1;
    }
    for(int i=0; i<n; i++){
        int a,b;
        scanf("%d%d",&a,&b);
        for(int j=a; j<b; j++){
            arr[j]=0;
        }
    }
    for(int i=0; i<=m; i++){
        if(arr[i]==1){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
