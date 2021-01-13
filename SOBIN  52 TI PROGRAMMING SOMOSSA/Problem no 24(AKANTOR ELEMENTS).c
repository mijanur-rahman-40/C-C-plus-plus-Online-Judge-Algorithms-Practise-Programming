#include<stdio.h>
int main()
{
     int array[2334],n,i,t;
     scanf("%d",&t);
     while(t--){
        scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%d",&array[i]);
     }
     for(i=0;i<n;i+=2){
            printf("%d ",array[i]);
     }
     printf("\n");
}
     return 0;
}

