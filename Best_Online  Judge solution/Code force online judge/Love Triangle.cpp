#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num; cin>>num;
    int arr[num+1];
    for(int i=1; i<=num; i++){
        cin>>arr[i];
    }
    int flag=0;
        for(int j=1; j<=num; j++){
            if(arr[arr[arr[j]]]==j){
                    flag=1;
            }
        }
   if(flag==1){
    cout<<"YES"<<endl;
   }
   else
    cout<<"NO"<<endl;
}
