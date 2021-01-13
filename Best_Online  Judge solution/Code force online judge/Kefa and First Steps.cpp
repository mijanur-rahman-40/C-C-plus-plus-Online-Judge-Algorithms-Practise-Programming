#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int arr[100010];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int coun=1,con=1,m;
    for(int i=0;i<num;i++){
        if(arr[i]<=arr[i+1]){
            coun++;
            con=max(con,coun);
        }
        else
            coun=1;
    }
    cout<<con<<endl;
}
