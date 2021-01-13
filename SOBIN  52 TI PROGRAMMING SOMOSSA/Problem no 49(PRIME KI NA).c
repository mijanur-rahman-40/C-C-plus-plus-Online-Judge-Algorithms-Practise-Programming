#include<stdio.h>
#include<math.h>
int main()
{
    int t,is_prime;
    long long int i,n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        is_prime=0;
         if(n==1){
            printf("%lld is not a prime.\n",n);
         }
        else{
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                is_prime=1;
                break;
            }
        }
        if(is_prime==0)
            printf("%lld is a prime.\n",n);
        else
            printf("%lld is not a prime.\n",n);
    }
         }
    return 0;
}
