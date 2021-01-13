#include<stdio.h>
int main()
{
    int row,col,rows,m,space,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&rows);
    scanf("%d",&m);
    for(row=1;row<=rows;row++){
        for(col=1;col<=row;col++){
                printf("%d ",m);
    }
   printf("\n");
    }
     for(row=1;row<=rows-1;row++)
     {
       for(col=rows-1;col>=row;col--)
        {
        printf("%d ",m);
        }
      for(space=2;space<=(2*row)-1;space++){
      printf(" ");
       }
     printf("\n");
     }
    }
return 0;

}

