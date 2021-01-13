#include<bits/stdc++.h>
using namespace std;
int main()
  {
     int n,m;int arr[150];
     scanf("%d%d",&n,&m);
     for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
          }
     sort(arr,arr+n);
     int ans=0,count=0;
      for(int i=0;i<n;i++){
          if(arr[i]<0 && count<m){
                 ans+=arr[i];
               count++;
            }
        }
       printf("%d\n",-ans);
    return 0;
}

