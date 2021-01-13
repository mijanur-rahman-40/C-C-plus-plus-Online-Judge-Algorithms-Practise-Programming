#include<stdio.h>
int main()
{
    char ch;
    //int i;
    printf("Alphabets from a to z are: ");
    for(ch='a';ch<='z';ch++)
        //for(i=97;i<=122;i++)

        //to convert uppercase ch='A' and ch='Z' or using ASCEE A=65 and Z=90
    {
        printf("\n%c",ch);
    //printf("%c\n",i);
    }
    return 0;
}
#include<stdio.h>
int main()
{
   char ch;
   int i=1;
        for(ch='A';ch<='Z';ch++){
    printf("%c= %d\n",ch,i++);
   }

   return 0;
}

