/*
#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int binarySearch(int arr[],int l,int r,int x)
{
  while (l <= r)
  {
    int m =l+(r-1)/2;
    if (arr[m] == x)
        return m;
    if (arr[m] < x)
        l = m + 1;
    else
         r = m - 1;
  }
  return -1;
}
int main(void)
{
   int arr[]={3,40,2,4,10};
   int n=sizeof(arr)/sizeof(arr[0]);

   //sort(arr,arr+n);
int x=40;
   int result = binarySearch(arr,0,n-1,x);
   if(result == -1)
    printf("Element is not present in array");
   else{
   printf("Element is present at  %d position \n", result+1);
   }
   return 0;
}
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
      int lo,hi,mid,sv,ck,i,size=0;
      int data[100];
            printf("Enter Size of Array: ");
            scanf("%d",&size);
            printf("Enter Number of Element Of The Array In Ascending Order : ");
                              for(i=0;i<size;i++)
                                    scanf("%d",&data[i]);
                //sort(data,data+size);
                     printf("Enter The Number To be Search : ");
                                    scanf("%d",&sv);
                          lo=0,hi=size-1,mid=0,ck=0;
                          while(lo<=hi){
                          mid=(lo+hi)/2;
                              if(data[mid]==sv){
                                    ck=1;
                                    break;
                              }
                              else if(data[mid]<sv)
                              lo=mid+1;
                              else
                              hi=mid-1;
                          }
                                    if(ck==1)
                                    printf("%d Found in %d position\n",sv,mid+1);
                                    else
                                    printf("%d Not Found\n",sv);

      return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;
int B_search(int arr[],int low,int high,int num)
{

    if(low>high){
        return -2;
    }
        int mid;
        mid=(low+high)/2;
    if(num>arr[mid]){
        B_search(arr,mid+1,high,num);
    }
    else if(num<arr[mid]){
        B_search(arr,low,mid-1,num);
    }
    else
        return mid;
}
int main()
{
      int arr[50],num;
      cin>>num;
      for(int i= 0;i<num; i++){
            scanf("%d",&arr[i]);
      }
      int element;
      printf("\nEnter Element To Search:\t");
      scanf("%d", &element);
      int pos=B_search(arr,0,num - 1,element);
      if(pos== -2){
            printf("%d Not Found\n", element);
      }
      else{
            printf("%d Found at Position %d\n", element, pos + 1);
      }
      return 0;
}
