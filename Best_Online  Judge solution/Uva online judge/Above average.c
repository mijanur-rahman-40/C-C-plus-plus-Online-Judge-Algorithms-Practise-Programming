#include<stdio.h>
int main()
{
    int test,i,array[1000],n;
    scanf("%d",&test);
    while(test--){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&array[i]);
        }
            int sum=0,count;
        for(i=0;i<n;i++)
        sum+=array[i];
        count=0;
        for(i=0;i<n;i++){
            if(array[i]*n>sum)
                count++;
        }
        printf("%0.3f%%\n",(double)100*count/n);
    }
    return 0;
}
