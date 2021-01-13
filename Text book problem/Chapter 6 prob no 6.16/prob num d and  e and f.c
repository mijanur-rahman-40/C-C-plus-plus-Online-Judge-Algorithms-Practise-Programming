#include<stdio.h>
int main()
{
    int i,x=0;
     for(i=1;i<10;i++)
     {
         if(i%2==1)
             x+=i;
         else
            x--;
            printf("%d\n",x);
     //continue;
     break;
     }
return 0;
}

