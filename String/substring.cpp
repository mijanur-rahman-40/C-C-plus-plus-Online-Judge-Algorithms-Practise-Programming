// string::substr
/*
#include <iostream>
using namespace std;
#include <string>

int main ()
{
  string str="We think in generalities, but we live in details.";
                                           // (quoting Alfred N. Whitehead)

  string str2 = str.substr (3,5);     // "think"

  size_t pos = str.find("live");      // position of "live" in str

  string str3 = str.substr (pos);     // get from "live" to the end

   cout << str2 << ' ' << str3 << '\n';

  return 0;
}
*/
/*

#include<bits/stdc++.h>
using namespace std;
int main()
{
     char arr[100],brr[100],k;
     int i,j;
     printf( "Enter the string:");
     scanf("%s",&arr);
     printf("Enter the substring to be searched: ");
     scanf("%s",&brr);
    k=strstr(arr,brr);
     if(k=='0'){
          printf("Substring Not found\n");
     }
     else
          printf("Substring Found\n");
     return 0;
}
*/
/*
/* strstr example
#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] ="This is a simple string";
  char * pch;
  pch = strstr (str,"simple");
  strncpy (pch,"sample",6);
  puts (str);
  return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;
   ret = strstr(haystack,needle);
   printf("The substring is: %s\n", ret);

   return(0);
}




#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i=0,j=0,flag_1=0,count=0,len=0,flag=0;
     char arr[80],brr[80];
     printf("Enter main  string:-");
     gets(arr); //i am a boy
     printf("Enter sub_string: ");
     gets(brr);//boy
     len=strlen(brr);
     while(arr[i]!=EOF)
     {
          if(arr[i]==brr[j])
          {
               i++;
               j++;
               flag=1;
               if(j==len){
                    j=0;
                    flag_1=1;
                    count++;
               }
          }
          else
          {
               if(flag==1){
                   j=0;
                   flag=0;
               }
               else
                    i++;
          }
     }
     if(flag_1==1)
     {
        printf("The given sub_string is in this string.\n");
        printf("It is present %d times.\n",count);
     }
     else{
          if(flag_1=0)
               printf("The given sub_string is not present in the main string \n");
     }
     getchar();
}
*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str1[20];
   char str2[10];
   scanf("%s",str1);
   scanf("%s",str2);
   char *ret;
   if(strstr(str1,str2)==0){
   printf("The substring not found");
   }
          else
              printf("The substring found\n");

   return(0);
}
