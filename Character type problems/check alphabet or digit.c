#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))//using ASCII a=97,z=122,A=65,Z=90,0=48,9=57 without ''
    {
        printf("%c is alphabet",ch);
    }
       else if(ch>='0'&&ch<='9')
       {
         printf("%c is digit",ch);
       }
       else
       {
           ("%c is special character",ch);
       }
    return 0;
}
