#include<stdio.h>
int main()
{
    char st1[1000],c;
    int i;
    scanf("%s",st1);
    for(i=0;i<strlen(st1);i++){
    if(islower(st1[0])){
      st1[i]=toupper(st1[0]);
      //break;
    }
    }
      printf("%s",st1);
      return 0;
//    for(i=1;i<strlen(st1);i++){
//        printf("%c",st1[i]);
//    }

       // printf("%s",st1);
    //return 0;
}
