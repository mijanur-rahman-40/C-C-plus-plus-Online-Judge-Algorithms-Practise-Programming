#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
   int main()
   {
   int n,flag,arr[3010],arr1[3010],i;
      while(scanf("%d",&n)==1)
   {
     flag=1;
       for(i=0;i<n;i++){
          scanf("%d",&arr[i]);
          }
      for(i=0;i<n-1;i++)
      {
          arr1[i]=abs(arr[i+1]-arr[i]);
             }
          sort(arr1,arr1+(n-1));
             for(i=1;i<n;i++){
          if(arr1[i]==arr1[i-1]){
           flag=0;
    break;
     }
     }
     if(flag==0)
     printf("Not jolly\n");
        else
   printf("Jolly\n");
   }

    return 0;
    }
