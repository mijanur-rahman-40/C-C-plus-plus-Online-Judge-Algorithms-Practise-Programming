/*upper to lower*/
#include<stdio.h>
#include<ctype.h>
int main()
{

char ch;
scanf("%c",&ch);
ch=tolower(ch);
switch(ch)
{
case'b':
printf("blue\n");
break;
case'c':
printf("no color");
break;
default:
printf("not known");
break;
}
return 0;

}
