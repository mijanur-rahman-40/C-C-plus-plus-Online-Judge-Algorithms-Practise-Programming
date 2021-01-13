#include <stdio.h>
int main()
{
    char s[100], length;
   char filename[]="my tip_file.txt";
    while(scanf("%s", s)==1){

    length=strlen(s);
    if(length%2==0){

        printf("CHAT WITH HER!\n");
    }
        else

        printf("IGNORE HIM!\n");
    }
    return 0;
}

