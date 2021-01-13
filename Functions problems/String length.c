#include<stdio.h>
int string_length(char str[]) //or char* str
{

    int i=0;
    int length=0;

   // while(str[i]!='\0'){
        //i++;
    for(i=0;str[i]!='\0';i++){
        length++;
}
return length;
//return i;
}
int main()
{
char country[100];
int leng;
while(1==scanf("%s",country)){
    leng=string_length(country);
    printf("length:%d\n",leng);
}
return 0;
}
