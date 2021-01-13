#include<stdio.h>
int main()
{
    int i,n,a=1,b=1,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

    if(i==1){
       printf("%d\n",a);
     continue;
   }
      if(i==2){
       printf("%d\n",b);
    continue;
      }
    c=a+b;

    a=b;
    b=c;
    printf("%d\n",c);
    }
return 0;
}

