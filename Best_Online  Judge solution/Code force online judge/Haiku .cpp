#include<bits/stdc++.h>
using namespace std;
int main()
{
     char str1[101],str2[101],str3[101];
     int coun1=0,coun2=0,coun3=0;
        gets(str1);
          for(int i=0;i<strlen(str1);i++){
               if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u'){
                         coun1++;
          }
     }
       gets(str2);
          for(int i=0;i<strlen(str2);i++){
               if(str2[i]=='a' || str2[i]=='e' || str2[i]=='i' || str2[i]=='o' || str2[i]=='u'){
                         coun2++;
          }
     }
       gets(str3);
          for(int i=0;i<strlen(str3);i++){
               if(str3[i]=='a' || str3[i]=='e' || str3[i]=='i' || str3[i]=='o' || str3[i]=='u'){
                         coun3++;
          }
     }
    int sum=coun1+coun2+coun3;
     if(sum==17 && coun1==5 &&  coun2==7 && coun3==5)
     printf("YES\n");
     else
          printf("NO\n");
     return 0;
}
