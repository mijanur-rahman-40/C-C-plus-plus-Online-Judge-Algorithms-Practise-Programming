#include<bits/stdc++.h>
using namespace std;
int arr[1000] ={0};
int main()
{
    arr[0]=-5;
    for(int i=1; i<=15; i++){
        arr[i+2] =i*2;
    }
    vector<int>path;
    for(int i=15; i!=-5; i=arr[i]){
        path.push_back(i);
    }
    for(int i=0; i<path.size(); i++){
        cout<<path[i]<<" ";
    }
    return 0;
}
