#include<stdio.h>
#include<math.h>
int main()
{
  unsigned long long int n,i;
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%llu",&n);
     unsigned long long int sum=1;
        for(i=2;i<sqrt(n);i++){
               //for(i=1;i<n;i++){
            if(n%i==0){
               sum=sum+i+(n/i);
                //sum+=i;
        }
        }
        if(sum==n)
        printf("YES, %llu is a perfect number!\n",n);
        else
            printf("NO, %llu is not a perfect number!\n",n);
    }
    return 0;
}
