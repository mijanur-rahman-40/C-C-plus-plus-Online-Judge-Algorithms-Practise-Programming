#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,t,len,len1;
    char str[1002],word[1002];
    scanf("%d",&t);
    while(t--){
        scanf(" %[^\n]",str);
        for(j=0,k=0;j<strlen(str);j++){
            if(str[j]!=' '){
                word[k]=str[j];
                k++;
            }
            else if(k>0){
                    word[k]='\0';
                for(i=k-1;i>=0;i--){
                printf("%c",word[i]);
                }
                printf(" ");
                k=0;
            }
        }

        if(k>0){
            word[k]='\0';
             for(i=k-1;i>=0;i--){
                printf("%c",word[i]);
                }
    printf("\n");
        }

        }
    return 0;
}


























