#include<stdio.h>
int main()
{
    long  int a,b,c,d;
    int t,j=1;
   scanf("%d",&t);
   while(t--){
    scanf("%ld%ld",&a,&b);
    c=a|b;
    d=a&b;
    printf("case %d: %ld %ld\n",j++,c,d);
   }
   return 0;
}
