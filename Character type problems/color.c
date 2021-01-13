#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
scanf("%c",&ch);
//ch=toupper(ch);
if(ch=='b'||ch=='B'){
printf("blue\n");
}
else if(ch=='r'||ch=='R'){
printf("red\n");
}
else if(ch=='c'||ch=='C'){
printf("no color\n");
}
return 0;
}
