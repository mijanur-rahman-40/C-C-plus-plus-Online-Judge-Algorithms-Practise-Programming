#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
printf("enter a letter:");
scanf("%c",&ch);
if(ch>='A'&& ch<='Z')
ch=ch+32;
else if(ch>='a'&& ch<='z')
ch=ch-32;
printf("the value_type is=%c\n",ch);
return 0;

}
