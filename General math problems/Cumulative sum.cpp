#include<bits/stdc++.h>
int main()
{
     int arr[]={4, -9, 3, 7, 1, 0, 2};
      int sum[100];
       sum[0]=4;
    int n=7;
    for(int i=1;i<=n;i++){
          sum[i]=sum[i-1]+arr[i];
    }
    for(int i=0;i<7;i++){
     printf("sum[%d] = %d\n",i,sum[i]);
    }
    return 0;
}

