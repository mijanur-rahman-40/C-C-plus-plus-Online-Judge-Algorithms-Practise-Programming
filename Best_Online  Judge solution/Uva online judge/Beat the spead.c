#include<stdio.h>
int main()
{
   int sum,sub,a,b;
   int t;
   scanf("%d",&t);
   while(t--){
   scanf("%d%d",&sum,&sub);
   if(sum<sub){
    printf("impossible\n");
   }
   else if((sum+sub)%2!=0){
    printf("impossible\n");
   }
   else{
        a=(sum+sub)/2;
   b=(sum-sub)/2;
    printf("%d %d\n",a,b);
   }
   }
   return 0;
}

