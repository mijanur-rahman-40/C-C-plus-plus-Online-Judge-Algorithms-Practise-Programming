#include<stdio.h>
int main()
{
    int array[2000],i,n;
    int sorted=1,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
                scanf("%d",&array[i]);
        }
        for(i=0;i<n-1;i++){
            if(array[i]<array[i+1]){
                    printf("YES\n");
                sorted=0;
                break;
            }
//    else if(sorted=1)
//        printf("YES\n");
    else if (sorted==1)
      printf("NO\n");
        }
    }
    return 0;
}
