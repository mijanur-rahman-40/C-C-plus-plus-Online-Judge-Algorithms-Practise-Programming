#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,k;
    scanf("%d%d",&len,&k);
    int arr[len];
    for(int i=0; i<len; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+len);
    int temp = arr[k-1];
    if(len==1 && k==1){
        cout<<arr[0]<<endl;
    }
    else if(k==0){
        if(arr[0]==1){
            cout<<"-1"<<endl;
        }
        else
            cout<<"1"<<endl;
    }
    else if(temp == arr[k]){
        cout<<"-1"<<endl;
    }
    else
        cout<<temp<<endl;
    return 0;
}
