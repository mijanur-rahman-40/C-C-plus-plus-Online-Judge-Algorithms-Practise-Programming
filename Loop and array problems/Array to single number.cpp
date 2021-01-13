#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv){
    int n;
    int i;
    char buff[100];
    int x[]={0,1,2,3,4,5,6};
    for (i=0; i<7; i++) {
        sprintf(&buff[i],"%d",x[i]);
    }
    n = atoi(buff);
    printf("the number is %d",n);

}

