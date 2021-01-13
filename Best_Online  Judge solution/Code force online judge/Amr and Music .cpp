#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; int arr[101];
    int vis[101]={0};
    cin>>n>>k;vector<int>vec,vec1;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        vec.push_back(arr[i]);
    }
    sort(arr+1,arr+n+1);
    int sum=0,coun=0;
    for(int i=1;i<=n;i++){
        sum+=arr[i];
        if(sum<=k){
            coun++;
        }
    }
    if(coun==0){
        printf("0\n");
    }
    else{
    cout<<coun<<endl; int coun1=0;
    for(int i=1;i<=coun;i++){
        for(int j=1;j<=n;j++){
            if(arr[i]==vec[j-1] && vis[j]==0 && coun>=coun1+1){
                vec1.push_back(j); coun1++; //cout<<coun1<<endl;
                vis[j]=1;
            }
        }
    }
    sort(vec1.begin(),vec1.end());
    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
