#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
            scanf("%d",&n);
            long long int fact=1,i;
        for(i=2;i<=n;i++){
            fact=fact*i;
        }
        printf("%lld\n",fact);
    }
    return 0;
}
