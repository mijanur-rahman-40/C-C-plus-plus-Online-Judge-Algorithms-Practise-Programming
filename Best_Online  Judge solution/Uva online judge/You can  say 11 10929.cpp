#include<bits/stdc++.h>
using namespace std;
int main()
{
   int mod;
   char num[1050];
  while(scanf("%s",&num)==1){
   mod=0;
      int len=strlen(num);
    for(int j=0;j<len;j++)
    {
    mod=mod*10+num[j]-'0';
     mod=mod%11;
         }
        if(mod==0 && len==1){
     break;
        }
      else if(mod==0)
        printf("%s is a multiple of 11.\n",num);
       else
        printf("%s is not a multiple of 11.\n",num);
}
return 0;
}

