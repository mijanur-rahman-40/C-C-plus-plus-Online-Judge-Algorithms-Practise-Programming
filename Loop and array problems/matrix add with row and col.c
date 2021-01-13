#include <stdio.h>
int main()
{
    int arr[40][40];
    int row,rows,col,colms,rowsum[50]={0},colsum[50]={0};
     scanf("%d%d",&rows,&colms);

    for(row=0; row<rows; row++){
        for(col=0; col<colms; col++){
            scanf("%d",&arr[row][col]);
        }
    }
    for(row=0; row<rows; row++){
          for(col=0;col<colms;col++){
           rowsum[row]+=arr[row][col];
           colsum[col]+=arr[row][col];
        }
    }
    for(row=0;row<rows;row++){

        printf("sum of row number %d is %d\n",row,rowsum[row]);
    }

         for(col=0;col<colms;col++){

        printf("sum of col number %d is %d\n",col,colsum[col]);
    }

    return 0;
}
//#include <stdio.h>
////#include <conio.h>
//
//int main(){
//    int rows, cols, row,col;
//    int Matrix[50][50], rowSum[50] = {0}, colSum[50] = {0};
//    printf("Enter size of a matrix\n");
//    scanf("%d %d", &rows, &cols);
//
//    printf("Enter matrix of size %dX%d\n", rows, cols);
//    /* Input matrix */
//    for(row = 0; row < rows; row++){
//        for(col = 0; col < cols; col++){
//            scanf("%d", &Matrix[row][col]);
//        }
//    }
//    /* Calculate sum of each row and column */
//    for(row = 0; row < rows; row++){
//        for(col = 0; col < cols; col++){
//            /* Add this element in it's row sum */
//            rowSum[row] += Matrix[row][col];
//            /* Add this element in it's column sum */
//            colSum[col] += Matrix[row][col];
//        }
//    }
//
//    /* Print rows sum */
//    for(row = 0; row < rows; row++){
//        printf("Sum of row number %d is %d\n",row, rowSum[row]);
//    }
//    printf("\n");
//    /* Print columns sum */
//    for(col = 0; col < cols; col++){
//        printf("Sum of column number %d is %d\n",col, colSum[col]);
//    }
//
//    //getch();
//    return 0;
//}
