#include<stdio.h>
int main()
{
    FILE *fp;
    char filname[]="my.txt";
    fp=fopen(filname,"w");
    fprintf(fp,"This is a file created by my program ! ");
    fprintf(fp,"I am so happy.");
    fclose(fp);
    return 0;
}
