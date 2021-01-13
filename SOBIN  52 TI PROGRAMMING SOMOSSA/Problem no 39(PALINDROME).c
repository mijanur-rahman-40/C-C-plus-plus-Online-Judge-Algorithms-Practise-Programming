#include<stdio.h>
#include<string.h>
int main()
{
    char word[80],reverse_word[80];
    int i,j,t,len;
    scanf("%d",&t);
    while(t--){
    scanf("%s",word);
    len=strlen(word);
    for(i=0,j=len-1;i<len;i++,j--){
        reverse_word[i]=word[j];
    }
    reverse_word[i]='\0';
    if(strcmp(word,reverse_word)==0){
        printf("Yes! It is a palindrome!\n");
    }
    else{
        printf("Sorry! It is not palindrome!\n");
    }
    }
    return 0;
}
  //PROBLEM ASE NESER TA TE
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//    char *name,*rev;
//     name=malloc(sizeof(char ));
//     scanf("%s",name);
//     //gets(name);
//     //rev=malloc(sizeof(char ));
//    rev=strrev(name);
//    rev=malloc(sizeof(char ));
//    if(strcmp(name,rev)==0){
//        printf("Yes! It is a palindrome!\n");
//    }
//        else{
//        printf("Sorry! It is not palindrome!\n");
//        }
//    return 0;
//}
//
