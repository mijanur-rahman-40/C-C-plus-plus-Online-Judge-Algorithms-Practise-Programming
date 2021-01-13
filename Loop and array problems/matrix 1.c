#include<stdio.h>
int main()
{
    int ara1[5][5]={{1,2,3,4,5},{10,20,30,40,50},{100,200,300,400,500},{1000,2000,3000,4000,5000},{10000,20000,30000,40000,50000}};
   int ara2[5][5];
   int row,col;
   printf("Content of first array (array1):\n");
   for(row=0;row<5;row++){
    for(col=0;col<5;col++){
        printf("%d\t",ara1[row][col]);

    }
    printf("\n");
   }
   printf("\n");
   //now start copy
//   for(row=0;row<5;row++){
//        for(col=0;col<5;col++){
//         ara2[col][row]=ara1[row][col];
//        }
//   }
   printf("Content of second array(array2)\n");
   for(row=0;row<5;row++){
    for(col=0;col<5;col++){
        printf("%d\t",ara1[col][row]);
    }
    printf("\n");
   }
   return 0;


}

