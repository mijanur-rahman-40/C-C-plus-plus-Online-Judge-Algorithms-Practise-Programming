#include<bits/stdc++.h>
using namespace std;
int main()
{
     long arr[300010];
     int num;long long sum=0,sum1,sum2;
     cin>>num;
     for(int i=0;i<num;i++){
          cin>>arr[i];
          sum+=arr[i];
     }
     sort(arr,arr+num);
     sum1=arr[0];
     sum2=sum;
     for(int i=1;i<num;i++){
          sum+=arr[i-1]+(sum2-sum1);
          sum1+=arr[i];
     }
     cout<<sum<<endl;
     return 0;
}
