#include<stdio.h>
#include<string.h>
char* function(char* str)
{
    strcpy(str,"String from function()");
    return str;
}
  int main()
  {
      char str[32];
      char* ptr;
      ptr=function(str);
      printf("The returned string is : %s\n",ptr);
      return 0;
  }

