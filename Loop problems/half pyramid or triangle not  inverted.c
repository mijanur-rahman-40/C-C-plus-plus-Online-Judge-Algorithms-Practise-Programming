#include<stdio.h>
int main()
{
    int row,col,rows;

    printf("Enter the rows:");
    scanf("%d",&rows);
    for(row=1;row<=rows;row++){
        for(col=1;col<=row;col++){
                printf("*");
    }
printf("\n");

    }
return 0;
}
