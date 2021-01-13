/*
#include<stdio.h>
#include<string.h>
int main()
{
    int n,len,i;
    char s[5];
    scanf("%d",&n);
        while(n--)
        {
            scanf("%s",s);
            len=strlen(s);
            if(len==5)
               printf("3\n");
            else
            {
                if((s[0]=='o' && s[1]=='n' )|| (s[0]=='o' &&s[2]=='e' )||(s[1]=='n '&& s[2]=='e'))
                   printf("1\n");
                else
                   printf("2\n");
            }
        }

    return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main(){
 int i,t,len,count = 0;
 char str[5],one[]={"one"};
 scanf("%d",&t);
 while(t--){
  scanf("%s",str);
   len =strlen(str);
  if(len == 5){
   printf("3\n");
  }
  else{
   for( i = 0; i < len; i++){
    if( one[i]== str[i]){
     count++;
    }
   }
   if( count >= 2){
    printf("1\n");
   }
   else{
    printf("2\n");
  }
 }
 }
 return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char str[10];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",&str);
        int len=strlen(str);
        if(len>3) printf("3\n");
        else
        {
            if((str[0]=='o'&&str[1]=='n')||(str[0]=='o'&&str[2]=='e')||(str[1]=='n'&&str[2]=='e'))
               printf("1\n");
            else
                printf("2\n");
        }
    }
    return 0;
}
