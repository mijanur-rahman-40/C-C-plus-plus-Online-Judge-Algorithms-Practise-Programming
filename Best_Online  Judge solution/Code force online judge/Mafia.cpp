#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num;
     long long mx=0;
     long long arr[100005];cin>>num;
     for(int i=0;i<num;i++){
          scanf("%I64d ",&arr[i]);
          mx=max(mx,arr[i]);
     }
     long long sum=0,ans;
     for(int i=0;i<num;i++){
        sum+=(mx-arr[i]);
     }
     if(sum>mx){
          ans=mx;
     }
     else{
          ans=mx+(mx-sum+num-2)/(num-1);
     }
     printf("%ld\n",ans);
     return 0;
}
