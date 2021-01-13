
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int arr[1000];
     int num,sum=0;cin>>num;
     for(int i=0;i<num;i++){
           cin>>arr[i];
          sum+=arr[i];
     }

     int sum1=sum/2;
     int coun=0,sum2=0;
     sort(arr,arr+num);
     for(int i=num-1;i>=0;i--){
          sum2+=arr[i];
               coun++;
          if(sum2>sum1){
          cout<<coun<<endl;
          return 0;
          }
     }

     return 0;
     }


















