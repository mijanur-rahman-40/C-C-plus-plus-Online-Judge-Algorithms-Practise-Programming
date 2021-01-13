#include<stdio.h>
int main()
{
    int i,j,val=0;
    int ara[5][5];
    for(i=0;i<5;i++)
    for(j=0;j<5;j++){
            ara[j][i]=val;

            val++;
    }
    printf("%d\n",ara[4][3]);
   printf("%d\n",ara[1][2]);
    return 0;
}
