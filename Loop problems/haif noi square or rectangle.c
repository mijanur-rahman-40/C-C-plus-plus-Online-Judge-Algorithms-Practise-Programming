#include <stdio.h>
int main()
{
    int i,j,rows;

   // printf("Enter number of rows: ");
    //scanf("%d",&rows);

    for(i=1; i<=6; ++i)
    {
        for(j=1; j<=15; ++j)
        {
            printf("*");//# or %d
        }
        printf("\n");
    }
    return 0;
}
