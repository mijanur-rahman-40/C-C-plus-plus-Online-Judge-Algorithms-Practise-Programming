#include<stdio.h>
#include<dos.h>
#include<conio.h>
int main()
{
    char str[24]="Home Computing Group.";
    int n;
    for(n=0;str[n]!='\0';n++)
        {
            putchar(str[n]);
            delay(100);
        }
        return 0;
}
