#include<stdio.h>
#include<string.h>
int main()
{
long int i,count=0,len;
char str[100000];
while(gets(str))
{
len=strlen(str);
for(i=0;i<len;i++)
    {
    if(str[i]=='"')
        {
        count=count+1;
        if(count%2==1)
            printf("``");
        else
            printf("''");
        }
    else
        printf("%c",str[i]);
    }
printf("\n");
}
return 0;
}
