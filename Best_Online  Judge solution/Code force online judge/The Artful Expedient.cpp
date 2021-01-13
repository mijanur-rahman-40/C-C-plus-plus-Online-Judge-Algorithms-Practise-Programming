#include<bits/stdc++.h>
using namespace std;
long int arr[2001],arr1[2001],vis[10000001]={0};
int main()
{
    int num,xr,flag=1;
    cin>>num;
    for(int i=1;i<=num;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=num;i++){
            int a;cin>>a;
         arr1[i]=a;
         vis[a]=1;
    }
    int coun=0;
    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            xr=arr[i] ^ arr1[j];
        if(vis[xr]==1){
            coun++;
             }
        }
    }
    if(coun%2==0){
        cout<<"Karen"<<endl;
    }
    else
        cout<<"Koyomi"<<endl;
}
/*
int a,b;
    while(cin>>a>>b){
        int c;
        c=a^b;
        cout<<c<<endl;
    }
    return 0;
}
*/
