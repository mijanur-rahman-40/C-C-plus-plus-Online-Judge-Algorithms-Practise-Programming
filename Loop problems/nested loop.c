#include<stdio.h>
int main()
{
    int i,j;
    char ch='A';
    for(i=3;i>=1;i--){

        for(j=1;j<=5;j++){
              printf("i=%d j=%d\n",i,j);

       //printf("%c\t",ch);
       ch++;

        }
   // printf("\n");

    }
    return 0;
}
