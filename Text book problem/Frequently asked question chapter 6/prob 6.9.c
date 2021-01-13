#include<stdio.h>
int main()
{
    int i=20,k=0,j;
    for(j=1;j<i;j=1+4*(i/j)){
        k+=j<10?4:3;
    }
    printf("%d",k);
    return 0;
}
