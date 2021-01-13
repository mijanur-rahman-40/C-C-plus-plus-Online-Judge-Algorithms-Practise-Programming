#include<stdio.h>
int main()
{
    int i,n;
    while(scanf("%d",&n)==1){
    if(n%2==1)
        printf("-1");
    else
    for(i=1;i<=n;i++){
            if(i%2==1)
            printf("%d ",i+1);
    else
        printf(" %d ",i-1);

    }
    }
    printf("\n");
return 0;
}
