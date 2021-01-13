#include<stdio.h>
//#include<string.h>
int main()
{
    char ch[1000],str[1000];
    int i,j,len;
    //gets(ch);
    scanf("%s",&ch);
    len=strlen(ch);
    ;
    for(i=0;i<len/2;i++){
    j=len-1;
    str[j]=ch[i];
    j--;
    }
  str[j]='\0';


    printf("%s\n",str);
    return 0;
    }

