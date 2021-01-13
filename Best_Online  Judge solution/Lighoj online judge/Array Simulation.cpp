#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst,j=1,i;
     scanf("%d",&tst);
     while(tst--){
          int arr[110];  int n,m;
          cin>>n>>m;
     for(i=0; i<n; i++){
          scanf("%d",&arr[i]);
     }
     char ch;
     while(m--){
          cin>>ch;
          if(ch=='S'){
              int num;cin>>num;
              for(i=0;i<n;i++){
               arr[i]=arr[i]+num;
              }
          }
          else if(ch=='M'){
            int num;cin>>num;
              for(i=0;i<n;i++){
               arr[i]=arr[i]*num;
              }
          }
          else if(ch=='D'){
               int num;cin>>num;
               for(i=0;i<n;i++){
                    arr[i]=arr[i]/num;
               }
          }
          else if(ch=='R'){
              for(i=0;i<n/2;i++){
               swap(arr[i],arr[n-i-1]);
              }
          }
          else if(ch=='P'){
               int num1,num2;cin>>num1>>num2;
               swap(arr[num1],arr[num2]);
          }
       }
          printf("Case %d:\n",j++);
          for(i=0;i<n;i++){
               printf("%d",arr[i]);
                if(i<n-1){
               printf(" ");
                }
        }
          printf("\n");
     }
     return 0;
}
