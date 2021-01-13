#include<stdio.h>
#include<string.h>
int main()
{
    char str[365];
    int i,t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",str);
        for(i=0;i<strlen(str);i++){
            if(str[i]=='L'){
                str[i]=str[i-1];
            }
            if(str[i]=='R'){
                str[i]=str[i+1];
            }
        }
                printf("%s\n",str);
    return 0;
}
