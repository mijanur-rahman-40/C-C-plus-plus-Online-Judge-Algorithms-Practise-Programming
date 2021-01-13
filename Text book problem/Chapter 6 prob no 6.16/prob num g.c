#include<stdio.h>
int main()
{
    int i,j,x;
     for(i=0;i<5;++i){

        for(j=0;j<i;++j)
     {
         x=(i+j-1);
         printf("%d\t",x);
     //bujanor jonno
     printf("i=%d j=%d\n",i,j);


     }

     }
     printf("\nx=%d",x);
     return 0;
}
