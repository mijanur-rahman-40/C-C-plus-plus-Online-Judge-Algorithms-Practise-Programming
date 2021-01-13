#include<stdio.h>
#include<string.h>
int main()
{
    char saarc[7][100]={"Bangladesh","India","Pakistan","Srilanka","Nepal","Bhutan","Maldives"};
    int row,col,name_lengt;
    for(row=0;row<7;row++){
            name_lengt=strlen(saarc[row]);
    for(col=0;col<name_lengt;col++){

    printf("(%d, %d) =%c, ",row,col,saarc[row][col]);

    }
    printf("\n");
    }
    return 0;
}
