#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,len;
    char str[1213];
    scanf("%d",&t);
    while(t--){
        scanf("%s",str);
        len=strlen(str);
        for(i=len-1;i>=0;i--){
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
