#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char mainstring[54],substring[67],pos[78];
gets(mainstring);
gets(substring);
pos[78]=strstr(mainstring[54],substring[67]);
if(pos)
    printf("%s%d\n",substring[67],pos[78]);
else
    printf("%s\n",substring[67]);
return 0;
}
