#include<stdio.h>
#include<math.h>
int main()
{
    int m;
    int t,i;
    double a;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&m);
        for(i=m;i>=0;i--){
                if(i==0)
                printf(" 1");
        else if(i==1)
            printf("2 +");
        else
            printf("2^%d + ",i);
        }
        printf("\n");

    }
    return 0;
}
