#include<bits/stdc++.h>
using namespace std;
int tst, num;
int arr[1000]={0};
int j=1,sum=0;
int main()
{
     cin>>tst;
     while(tst--){
               cin>>num;
          for(int i=0;i<num;i++){
               cin>>arr[i];
     sum+=arr[i];
     }
     int n=num-1;
     cout<<"Case "<<j++<<": "<<sum-n<<endl;
     sum=0;
     }
     return 0;
}

