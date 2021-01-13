#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,count;
    char str[1000];
    scanf("%d",&t);
 while(t--){
   scanf(" %[^\n]",str);
 //gets(str);
 count=0;
  for(i=0;str[i]!='\0';i++){
 if(str[i]=='a')
        count++;
        else if(str[i]=='e')
        count++;
    else if(str[i]=='i')
        count++;
   else if(str[i]=='o')
        count++;
   else if(str[i]=='u')
    count++;
  }
                printf("Number  of vowels = %d\n",count);
 }

 return 0;
}
