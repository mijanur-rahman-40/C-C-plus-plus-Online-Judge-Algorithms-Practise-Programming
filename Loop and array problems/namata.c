#include<stdio.h>
int main()
{
    int namata[10][10];
    int row ,col,b;
    for(row=0;row<10;row++){
         for(col=0;col<10;col++){
            //namata[row][col]=(row+1)*(col+1);
            b=(row+1)*(col+1);




//    for(row=0;row<10;row++){
//        for(col=0;col<10;col++){
               printf("%d x %d =%d\n",(row+1),(col+1),b);
        }

        printf("\n\n");
    }
    return 0;


}
