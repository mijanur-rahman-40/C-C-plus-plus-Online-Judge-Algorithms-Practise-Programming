#include<stdio.h>
#define data1 4
#define data2 2*data1
int main()
{
    int ara[5],i;
    for(i=0;i<5;i++)
        ara[i]=data2*i;
   for(i=0;i<5;i++)
    printf("ara[%d]=%d\n",i,ara[i]);
    //int ara[0]=0;
    for(i=1;i<5;i++){
        ++ara[i];
        ara[i]+=ara[i-1];
    }
    for(i=0;i<5;i++)
        printf("ara[%d]=%d\n",i,ara[i]);
    return 0;
    }
