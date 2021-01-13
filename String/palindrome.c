#include<stdio.h>
#include<string.h>
int main()
{
    char word[80],reverse_word[80];
    int i,j,len;
    scanf("%s",word);
    len=strlen(word);
    for(i=0,j=len-1;i<len;i++,j--){
        reverse_word[i]=word[j];
    }
    reverse_word[i]='\0';
    printf("%s\n",reverse_word);
    if(strcmp(word,reverse_word)==0){
        printf("%s is a palindrome .\n",word);
    }
    else{
        printf("%s is not a palindrome .\n",word);
    }
    return 0;
}
