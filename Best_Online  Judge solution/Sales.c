#include<stdio.h>
int main()
{
    int array[1000],i,j,n,tst;
    scanf("%d",&tst);
    while(tst--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&array[i]);
        }
        int count;
        count=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(array[i]<=array[j])
                    count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
