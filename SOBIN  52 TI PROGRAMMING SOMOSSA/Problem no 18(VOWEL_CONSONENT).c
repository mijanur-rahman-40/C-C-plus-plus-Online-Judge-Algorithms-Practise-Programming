#include<stdio.h>
#include<string.h>
int main()
{
    int i,t;
    char str[1000];
    scanf("%d",&t);
while(t--){
   scanf(" %[^\n]",str);
 //gets(str);
  for(i=0;str[i]!='\0';i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
                printf("%c",str[i]);
 }
 }
                printf("\n");

    for(i=0;str[i]!='\0';i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
                printf("%c",str[i]);
        }
    }
     printf("\n");
    }
    return 0;
}
