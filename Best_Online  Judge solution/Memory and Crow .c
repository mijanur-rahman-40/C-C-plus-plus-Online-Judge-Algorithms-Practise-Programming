#include<stdio.h>
int main()
{
    int n,b,i;
    int arr[100005];
    while(scanf("%d",&n)==1){
            if(n<2)
            break;
    for(i=0;i<n;++i){
        scanf("%d",&arr[i]);
    }
         for(i=0;i<n-1;i++){
      b=arr[i]+arr[i+1];

    printf("%d ",b);
         }
    printf(" %d\n",arr[n-1]);
         }

    return 0;

}

