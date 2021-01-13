#include<stdio.h>
int main()
{
    char str[1000],tast;
    scanf("%d",&tast);

    while(tast--){
    scanf("%s",str);
    if(strlen(str)==3){
    printf("%u\n",(str[0]+str[1]+str[2]));
    }
    else
        break;
    }
    return 0;
}
