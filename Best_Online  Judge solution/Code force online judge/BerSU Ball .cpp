#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;  int arr1[110],arr2[110];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    int coun=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(abs(arr1[i]-arr2[j])<=1){
            if(arr1[i]!=-1 && arr2[j]!=-1)
                coun++;
                arr1[i]=-1;
                arr2[j]=-1;
           break;
           }
        }
    }
    cout<<coun<<endl;
}
