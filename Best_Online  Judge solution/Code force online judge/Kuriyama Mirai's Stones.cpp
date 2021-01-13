#include<bits/stdc++.h>
using namespace std;
long long arr1[100010],arr2[100010];
int main()
{
      int num,tst;
     cin>>num;
     for(int i=1;i<=num;i++){
          cin>>arr1[i];
		arr2[i]=arr1[i];
     }
     sort(arr2+1,arr2+num+1);
     for(int i=1;i<=num;i++){
          arr1[i]+=arr1[i-1];
          arr2[i]+=arr2[i-1];
     }
     cin>>tst;
     while(tst--){
          int type,a,b;cin>>type>>a>>b;
          if(type==1){
               printf("%I64d\n",arr1[b]-arr1[a-1]);
          }
          else
               printf("%I64d\n",arr2[b]-arr2[a-1]);
     }
     return 0;
}
