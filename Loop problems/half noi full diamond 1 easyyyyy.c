#include <stdio.h>
int main()
{
    int i,j,colm,rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    colm=rows-1;
     for(i=1;i<=rows;++i)
     {
       for(j=1;j<=colm;j++)
        {
        printf(" ");
        }
    colm--;

       for(j=1;j<=(2*i)-1;j++)

        {
     printf("%d",j);

    }
    printf("\n");
     }
     for(i=rows-1;i>=1;--i)
     {
       for(colm=1;colm<=rows-i;++colm){
       //colm hocce faka obostai colm printf korbe and j hocce  num create korar somai colm printf korbe.
        printf(" ");
       }
        for(j=1;j<=2*i-1;++j){

        printf("%d",j);
        }
    printf("\n");
     }
     return 0;
}


