#include<stdio.h>
int main()
{
   int a,b,sum,tst,i=1;
   scanf("%d",&tst);
   long sum1;
   while(tst--){
        scanf("%d%d",&a,&b);
        sum=a+b;
        sum1=b*(b+1)/2;
   printf("Case %d: %d %ld\n",i++,sum,sum1);
   }
return 0;
}
