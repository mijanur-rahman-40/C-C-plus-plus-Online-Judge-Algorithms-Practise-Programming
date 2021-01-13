#include<stdio.h>
#include<string.h>
int main()
{
    char str[347];
    char *word;
    int t,count;
    scanf("%d",&t);
    while(t--){
        scanf(" %[^\n]",str);
        word=strtok(str,",!;?.' '");
        count=0;
        while(word!=NULL){
            if(strlen(word)>0){
                count++;
            }
            word=strtok(NULL,",!;?.' '");
        }
        printf("%d\n",count);

    }
    return 0;
}
