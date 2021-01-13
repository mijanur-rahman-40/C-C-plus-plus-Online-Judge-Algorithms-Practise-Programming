#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char st1[100];
   scanf("%s",st1);
    int count=0,count1=0,i;
    for(i=0; i<strlen(st1); i++){
        //if(st1[i]>=65 && st1[i]<=90){
        if(isupper(st1[i])){
            count++;
        }
        else if(islower(st1[i])){
            //(st1[i]>=97 && st1[i]<=122){

            count1++;
        }
    }
    if(count>count1){
        printf("%s",strupr(st1));
    }
    else{
        printf("%s",strlwr(st1));
    }
    return 0;
}

