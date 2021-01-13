#include<stdio.h>
int main()
{
    char name[64];
    printf("your name please:");
    gets(name);
    printf("so you are %s\n",name);
    puts(name);
    return 0;
}
