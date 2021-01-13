#include<stdio.h>
int main()
{
    char c=-64;
    int i=-32;
    unsigned int u=-16;
    if(c>i){
        printf("Pass1,\n");
        if(c<u)
            printf("Pass2\n");
        else
            printf("Fail2\n");
    }
    else
        printf("Fail1\n");
        if(i<u)
            printf("Pass2,\n");
        else
            printf("Fail2\n");
        return 0;
}



