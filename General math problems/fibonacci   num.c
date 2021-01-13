#include<stdio.h>
int main()
{
     int i,n,a=0,b=1;
     long int c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

    if(i==0){
       printf("%d\n",a);
     continue;
   }
      if(i==1){
       printf("%d\n",b);
    continue;
      }
    c=a+b;

    a=b;
    b=c;

    printf("%ld\n",c);
    }
return 0;
}



