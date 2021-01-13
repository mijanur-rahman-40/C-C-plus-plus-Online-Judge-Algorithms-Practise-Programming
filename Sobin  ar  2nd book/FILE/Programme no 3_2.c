#include<stdio.h>

int main()
{
 FILE *fp;
   char FILENAME[]="my_file.txt";
     fp=fopen(FILENAME,"w");
       fprintf(fp,"This is a file created by my program is opened! ");
       fprintf(fp,"I am so happy.\n");
          fclose(fp);
            fprintf(fp,"Second line.\n");
 return 0;
}
