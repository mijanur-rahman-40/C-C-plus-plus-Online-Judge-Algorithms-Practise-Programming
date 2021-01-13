#include<iostream>
using namespace std;
int main()
{
   string s1,s2;
    cin>>s1;
    cin>>s2;
    int a,b;
    a=atoi(s1.c_str());
    b=atoi(s2.c_str())
  if(s1.length()==s2.length()){
    cout<<a^b<<endl;
  }
  return 0;
}







include<stdio.h>
int main()
{
   char str1[100],str2[100];
   scanf("%s%s",str1,str2);
   int i;
   for(i=0;i<strlen(str1);i++){
    if(str1[i]==str2[i]){
        str1[i]='0';
    }
    else{
        str1[i]='1';
   }
   }
   printf("%s\n",str1);
    return 0;
}

