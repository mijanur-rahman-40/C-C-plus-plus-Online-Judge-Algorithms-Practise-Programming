#include<stdio.h>
int main()
{
    char str[24]="ABCDEHFJDkjf",dar;
    int n,ch;
    ch=putchar('a');
    for(n=0;str[n]!='\0';n++){
        putchar(str[n]);
    }
    printf("\n");
    printf("%d\n",ch);
    puts("my name is red.");
    char str1[]="Using puts()function.";
    char *str2="Using puts() function.";
    puts(str1);
    puts(str2);
    puts("Using puts() function.");
int ch1;
char ch2;
  ch1='b';
  ch2=98;
  printf("b= %d 98= %c\n",ch1,ch2);
    return 0;
}
