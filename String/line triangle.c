#include<stdio.h>
int main()
{
    char name[10000]={"palindrome name window"};
    int len=strlen(name);
    int i,j;
    for(i=0;i<len;i++){
        for(j=0;j<=i;j++){
            printf("%c",name[j]);
        }

        printf("\n");

    }
    return 0;
}
