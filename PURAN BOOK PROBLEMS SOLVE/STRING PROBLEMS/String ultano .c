
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *name,*rev;
    //clrscr();
 name=malloc(sizeof(char ));
    gets(name);
    scanf("%s",name);
    rev=strrev(name);
    printf("%s\n",rev);
    //puts(name);
    return 0;
}


