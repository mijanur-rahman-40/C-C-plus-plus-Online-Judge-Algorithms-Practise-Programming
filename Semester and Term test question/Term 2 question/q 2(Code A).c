#include<stdio.h>
int main()
{
    int i;
    char ch='A';
    for(i=0,ch='A';i<4;i++,ch+=2*i){

        printf("%c",ch);
    }
    return 0;
}
//output  ACGM
