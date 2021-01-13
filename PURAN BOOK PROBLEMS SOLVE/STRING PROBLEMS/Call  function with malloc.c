#include<stdio.h>
char* function(char* ptr)
{
//char* ptr;
  ptr=malloc(32 *sizeof(char));
  strcpy(ptr,"\"String\" from function()");
  return ptr;
}
  int main()
  {
      char* tr,ptr;
      tr=function(ptr);
      printf("String is: %s\n",tr);
  }
