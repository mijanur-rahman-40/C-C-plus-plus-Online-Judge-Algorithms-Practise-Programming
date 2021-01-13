#include<stdio.h>
int main()
{
    int n,i;
    float sum=0;
    printf("Enter number ",n);
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            sum=sum+(1.0/i);

    }
    printf("Sum=%f\n",sum);
    return 0;
}
