#include <stdio.h>
int main()
{
    int i,j,space,rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    //space=rows-1;
     for(i=1;i<=rows;++i)
     {
       for(j=rows;j>=i;j--)
        {
        printf("*");
        }
      for(space=2;space<=(2*i)-1;space++){
      printf(" ");
       }
     printf("\n");
     }
return 0;
}

