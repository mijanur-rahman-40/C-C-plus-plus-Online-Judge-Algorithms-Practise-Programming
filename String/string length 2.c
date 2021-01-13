#include <stdio.h>
int main()
{
    char str[100],length=0, i;

    //while(scanf("%s", s)==1){
            while(scanf(" %[^\n]",str)==1){
            //length=strlen(s);

    for(i = 0; str[i] != '\0'; i++);{
         //printf("length:%d\n",length);
        printf("%d\n",i);
    }
    }
        return 0;

}

