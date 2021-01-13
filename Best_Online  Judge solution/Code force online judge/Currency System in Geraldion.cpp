#include<bits/stdc++.h>
using namespace std;
int main()
{
     int num,flag=0;
     int arr[1000];
     scanf("%d",&num);
     for(int i=0;i<num;i++)
     {
          scanf("%d",&arr[i]);
          if(arr[i]==1){
               flag=1;
          }
     }
     if(flag==1){
          printf("-1");
     }
     else
          printf("1");
}
