#include<stdio.h>
#include<math.h>
int main()
{
    int t,x,k,i,sum,power;
    double a;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&x,&k);
        sum=0;
        //power=1;
        for(i=0;i<(k+1);i++){
            //power=power*x;
           a=pow(x,i);
           //sum+=power;
            sum+=a;
        }
        printf("Result = %d\n",sum);
           }
           return 0;
}
