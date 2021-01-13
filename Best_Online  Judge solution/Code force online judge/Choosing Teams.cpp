#include<bits/stdc++.h>
using namespace std;
int main()
{
   int count=0;
     int n,k,arr[2000];
     scanf("%d%d",&n,&k);
     for(int i=0;i<n;i++){
               scanf("%d",&arr[i]);
     }
     for(int i=0;i<n;i++){
          if(5-arr[i]>=k){
               count++;
          }
     }
     int ans=count/3;
     printf("%d",ans);
     return 0;
}
