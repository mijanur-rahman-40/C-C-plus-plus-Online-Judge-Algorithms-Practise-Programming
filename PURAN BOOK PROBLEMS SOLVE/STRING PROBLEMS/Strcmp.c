#include<stdio.h>
#include<string.h>
int main()
{
    char str1[0],str2[40];
    int x;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    x=strcmp(str1,str2);
    if(0!=x)
    {
        printf("Two string are not equal");
    }
    else
        printf("Two string are equal.");
    return 0;

}
