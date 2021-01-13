#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character=");
    scanf("%c",&ch);
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='0'||ch=='u')//||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        {
    printf(" %c is a vowel",ch);
    }
    else{
            printf("%c is a consonant\n",ch);
    }
return 0;
}
