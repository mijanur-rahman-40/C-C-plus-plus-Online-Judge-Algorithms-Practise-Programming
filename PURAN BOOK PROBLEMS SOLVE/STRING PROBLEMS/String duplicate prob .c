#include<stdio.h>
#include<string.h>
int main()
{
    char *name,*name1;
    printf("Enter string to duplicate ");
    gets(name1);
    if((name1=strdup(name)))
        printf("%s\n",name1);
    else
        printf("Sorry\n");
    return 0;
}
