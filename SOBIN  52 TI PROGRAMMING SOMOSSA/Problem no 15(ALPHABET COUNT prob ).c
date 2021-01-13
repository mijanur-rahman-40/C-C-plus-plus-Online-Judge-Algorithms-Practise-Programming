
#include<stdio.h>
#include<string.h>

int main()
{
    char str[744];
    int  count[26]={0};
    int i,t;
    scanf("%d",&t);
    while(t--){
        scanf("%s",str);
        for(i=0;i<strlen(str);i++){
            if(str[i]>='a' && str[i]<='z')
            {
                count[str[i]-'a']++;
                count[i]==0;
            }

        for(i=0;i<26;i++){
            if(count[i]==1){
                printf("%c = %d\n",'a'+i,count[i]);
                continue;
            }
        }
        }
    }
    return 0;

}
/*
#include <stdio.h>
#include <string.h>
void main()
{
    printf("PLEASE ENTER A STRING\n");
    printf("GIVE ONLY ONE SPACE BETWEEN WORDS\n");
    printf("PRESS ENETR WHEN FINISHED\n");

    char str[100];
    int arr[26]={0};
    char ch;
    int i;

    gets(str);
    int n=strlen(str);

    for(i=0;i<n;i++)
    {
        ch=tolower(str[i]);
        if(ch>=97 && ch<=122)
        {
            arr[ch-97]++;
        }
    }
    for(i=97;i<=122;i++)
        printf("%c OCCURS %d NUMBER OF TIMES\n",i,arr[i-97]);
    return 0;
}
*/
