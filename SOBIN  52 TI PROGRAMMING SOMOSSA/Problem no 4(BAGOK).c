#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,t,m=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("Case %d:",m++);
        for(i=1;i<=n;i++){
            if(n%i==0){
                printf(" %d",i);
        }
    }
    printf("\n");
    }
    return 0;
}
