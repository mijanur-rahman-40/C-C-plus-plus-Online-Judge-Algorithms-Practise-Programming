#include<stdio.h>
#include<string.h>
int main()
{
    char saarc[7][100]={"Bangladesh","India","Pakistan","Srilanka","Nepal","Bhutan","Maldives"};
    int row,col,name_lengt;
    for(row=0;row<7;row++){
            name_lengt=strlen(saarc[row]);
    for(col=0;col<name_lengt;col++){

    }
        printf("%s\n",saarc[row]);
    }
    return 0;

}

