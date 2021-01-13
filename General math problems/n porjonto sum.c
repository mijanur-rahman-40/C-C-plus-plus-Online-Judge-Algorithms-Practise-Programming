#include<stdio.h>
main()
{
   int a=1,sum=0;
   do
   {
       sum=sum+a;
       a=a+1;
   }
    while(a<=5);
    printf("Sum=%d",sum);
    return 0;
}
