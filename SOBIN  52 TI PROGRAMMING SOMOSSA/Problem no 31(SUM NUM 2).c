#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,n,num,sum;
    scanf("%d",&t);
    while(t--){
            scanf("%d",&n);
        for(num=2;num<=n;num++){
            sum=1;
            for(i=2;i<=sqrt(num);i++){
                if(num%i==0){
                    sum=sum+i+num/i;
                }
            }
                if(sum==num){
                    printf("%d\n",num);
                }
        }
    }
    return 0;
}
