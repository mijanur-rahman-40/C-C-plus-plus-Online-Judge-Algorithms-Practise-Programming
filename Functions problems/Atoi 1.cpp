#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int i;
  char buffer[256];
  printf ("Enter a number: ");
  fgets (buffer, 256, stdin);
  i = atoi (buffer);
  int a;
  a=reverse(i);
  printf ("The value entered is %d. Its double is %d.\n",a,i*2);
  return 0;
}
