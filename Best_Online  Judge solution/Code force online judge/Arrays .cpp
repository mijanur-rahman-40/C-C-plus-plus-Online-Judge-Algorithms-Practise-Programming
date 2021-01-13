#include<bits/stdc++.h>
using namespace std;
int main()
{
     long int arr1[100010],arr2[100010];
     int num1,num2;
     cin>>num1>>num2;
     int a1,a2;
     cin>>a1>>a2;
     for(int i=0;i<num1;i++){
          cin>>arr1[i];
     }
     for(int i=0;i<num2;i++){
          cin>>arr2[i];
     }
     int coun=0;
     for(int i=0;i<num2;i++){
          if(arr1[a1-1]<arr2[i]){
               coun++;
          }
     }
     if(a2<=coun){
          cout<<"YES"<<endl;
     }
     else
          cout<<"NO"<<endl;
     return 0;
}
