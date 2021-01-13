#include<stdio.h>
int main()
{
    int i,n,x,arr[1000],flag=0,tst;
    scanf("%d",&tst);
    while(tst--){
     scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        scanf("%d",&x);
        for(i=0;i<n;i++){
            if(arr[i]==x){
                printf("%d Found at the location %d ta\n",x,i+1);
            flag=1;
            break;
            }
        }
        if(flag==0)
            printf("%d is not found\n",x);

        }
    return 0;
}
