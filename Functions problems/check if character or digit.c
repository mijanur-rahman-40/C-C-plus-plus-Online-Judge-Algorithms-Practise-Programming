#include<stdio.h>
char find(char c)
{
    char temp;
    if(c>='0' && c<='9')
        temp=c;
        else if (c>='a' && c<='z')
            temp=c;
   return temp;

}
int main()
{
    char ch,h,h1;
    scanf("%c",&ch);
    //h=find(ch);
    h1=find(ch);
    printf("%c is digit\n",h1);
    return 0;
}
