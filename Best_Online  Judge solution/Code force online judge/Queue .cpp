#include<bits/stdc++.h>
using namespace std;
int main()
{
     long arr[100010];
     int num;
     cin>>num;
     for(int i=0;i<num;i++){
          cin>>arr[i];
     }
     int coun=1;
     sort(arr,arr+num);
     int sum=arr[0];
     for(int i=1;i<num;i++){
          if(sum<=arr[i]){
               coun++;
               sum+=arr[i];
          }
     }
     cout<<coun<<endl;
     return 0;
}
