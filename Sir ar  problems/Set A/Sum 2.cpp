#include<stdio.h>
int main()
{
   int x,i,n,sum=0,a=1,b;
   scanf("%d",&n);
   while(a<=b){
   scanf("%d",&b);

   for(i=1;i<=n;i++){
    scanf("%d",&x);
     sum=sum+x;
     printf("Case %d :",a++);
    //sum=sum+x;

    //printf("Case %d :",a++);

    printf("%d\n",sum);
   }
   }
    return 0;
}

