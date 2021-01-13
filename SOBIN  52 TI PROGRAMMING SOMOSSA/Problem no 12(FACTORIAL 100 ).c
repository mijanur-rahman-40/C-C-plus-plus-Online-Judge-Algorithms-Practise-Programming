#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
            scanf("%d",&n);
            long long int mod,fact=1,i;
        for(i=2;i<=n;i++){
            fact=fact*i;
        }
        //printf("%lld\n",fact);


      int zero_count=0;
      //num=fact;
        while(fact>0){
            mod=fact%10;
            if(mod==0)
                zero_count++;
           else
                break;
        fact=fact/10;
        }
        printf("%d\n",zero_count);
     }
    return 0;
}
