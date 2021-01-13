#include<stdio.h>
main(){

   int mat[20][20],i,j,rows,colm,b=0;
        scanf("%d%d",&rows,&colm);
   for(i=0;i<rows;i++)
        for(j=0;j<colm;j++){
  scanf("%d",&mat[i][j]);
  }
   for(i=0;i<rows;i++){
        for(j=0;j< colm;j++){

  printf("%d\t",mat[i][j]);


}

     printf("\n");
   }


//printf("\n");
//printf("The transverse matrix is\n");
//            for(i=0;i<rows;i++){
//        for(j=0;j<colm;j++){
//  printf("%d\t",mat[j][i]);
//}
//    printf("\n");
//}

return 0;
}
