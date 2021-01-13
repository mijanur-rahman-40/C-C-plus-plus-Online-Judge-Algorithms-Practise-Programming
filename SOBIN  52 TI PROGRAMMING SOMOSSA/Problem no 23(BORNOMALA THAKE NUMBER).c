#include<stdio.h>
int main()
{
    int i,len,t;
    char str[100];
    scanf("%d",&t);
    while(t--){
        scanf("%s",&str);
        len=strlen(str);
        for(i=0;i<len;i++){
            if(str[i]>='A' && str[i]<='Z'){
                printf("%d",str[i]-64);
            }
        }
            printf("\n");
    }
    return 0;
}
