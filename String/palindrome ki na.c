/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char *st1,*st2;
   st1=malloc(sizeof(char ));
    scanf("%s",st1);

    st2=strrev(st1) ;
    if(strcmp(st1,st2)==0){
        printf("NO\n");
    }
    else{
        printf("YES\n");
    }
    return 0;

}
*/
#include <stdio.h>
#include <string.h>

int main(){
    char string1[10000];
    int i, length;
    int flag = 0;
    scanf("%s", string1);
    length = strlen(string1);
    for(i=0; i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag =1;
            break;
	   }
	}
    if (flag==0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
