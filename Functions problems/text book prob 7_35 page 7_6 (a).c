#include<stdio.h>
int function(int count)

             {
                 int y;
                 y=count*count;
                 return(y);
             }
             int main()
             {
                 int a,count;
                 for(count=0;count<=5;count++){
                    a=function(count);
                    printf("%d\n",a);
                 }
  return 0;
             }



