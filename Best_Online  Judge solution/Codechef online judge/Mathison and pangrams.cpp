#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst;
       scanf("%d",&tst);
      for(int i=1;i<=tst;i++){
     char str[50001];
     int ch[26];
     long int index[26];
     for(int i=0;i<26;i++){
        scanf("%ld",&index[i]);
        ch[i]=0;
     }
    scanf("%s",str);
   for(int i=0;i<strlen(str);i++){
        ch[str[i]-'a']++;
       }
   int count=0;
   for(int i=0;i<26;i++){
       if(ch[i]==0)
       {
           count+=index[i];
       }
   }
     printf("%d\n",count);
     }
    return 0;
}
