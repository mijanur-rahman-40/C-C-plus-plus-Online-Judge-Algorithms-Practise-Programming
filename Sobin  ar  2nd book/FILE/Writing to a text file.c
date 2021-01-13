#include <stdio.h>
int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("program.txt","w");
  char ch;
  int j=1;
     for(ch='A';ch<='Z';ch++){
    printf("%c= %d\n",ch,j++);
   }
   int i=65;
   for(ch='A';ch<='Z';ch++){
   fprintf(fptr," %c = %d\n",ch,i++);
   }
   fclose(fptr);

   return 0;
}
