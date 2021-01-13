
#include<stdio.h>
#include<string.h>

int main()
{
    char first_line[1002]={0};
    char ch[2];
    int count,i,t;int flag=0;
    scanf("%d",&t);
    while(t--){
    scanf(" %[^\n]",first_line);
    scanf("%s",&ch);
    count=0;
    for(i=0;i<strlen(first_line);i++){
            if(ch[0]==first_line[i]){
            count++;
            flag=1;
            //break;
            continue;
            }
    }
    if(flag==1){
        pprintf("Occurrence of '%c' in '%s' = %d\n",ch[0],first_line,count);
}
 else
        printf("'%c' is not present\n",ch[0]);

}
    return 0;
}

  /*
  letter count:
   #include<stdio.h>
int main()
{
    int t,n,i;
    char c;
    char s[10001];
    scanf("%d",&t);
    while(t--){
           scanf(" %[^\n]",s);
            i=0;
            n=0;
    scanf("%c",&c);
    while(s[i]!='\0')
    {
        if(s[i]==c)
            n++;
        i++;
    }
    printf("Occurance of '%c' in '%s' = %d \n",c,s,n);
   }
   return 0;
}
*/
/*
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

 char str[] = "TheQuickBrownFoxJumpedOverTheLazyDog";

int counts[26] = { 0 };
int main(){
int i;
int len = strlen(str);

for (i = 0; i < len; i++) {
    // Just in order that we don't shout ourselves in the foot
    char c = str[i];
    if (!isalpha(c)) continue;

    counts[(int)(tolower(c) - 'a')]++;
}

for (i = 0; i < 26; i++) {
    printf("'%c' has %2d occurrences.\n", i + 'a', counts[i]);
}
return 0;
}
*/
/*
#include <stdio.h>
int main()
{
    int n,i,t,c;
    int a[1005];
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]!=i+1 && a[i]!=n-i)
                c=1;
        }
        if(c==1) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
*/
