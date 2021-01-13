#include<stdio.h>
int main()
{
    int i=0;
    char ch,str[50];
    printf("type few character: ");
    while((ch=getchar() )!='\n')
    {
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    printf("you have typed : %s",str);
    return 0;

}
