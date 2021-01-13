
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],count=0;
    int i;
    scanf("%s",&str);
    for(i=0;i<strlen(str);i++)
    if(str[i]==tolower(str[i])){
            count++;
    }
    if(count==0){
        for(i=0;i<strlen(str);i++){
             str[i]=tolower(str[i]);
               printf("%c",str[i]);
        }
    }
     else if(count==1){
        str[0]=toupper(str[0]);
        printf("%c",str[0]);
        for(i=1; i<strlen(str);i++){
           str[i]=tolower(str[i]);
        printf("%c",str[i]);
     }
     }
      else{
         printf("%s",str);
      }
    return 0;
}

/*
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
 {
     string a;
     cin >> a;
     int i, count=0;
     for(i=0; i<a.size(); i++){
        if(a[i]==tolower(a[i]))
            count++;
     }
     if(count==0){
        for(i=0; i<a.size(); i++)
            a[i]=tolower(a[i]);
        cout<< a <<endl;
    }
     else if(count==1){
        a[0]=toupper(a[0]);
        for(i=1; i<a.size(); i++)
            a[i]=tolower(a[i]);
        cout<< a <<endl;
     }
     else{
        cout<< a <<endl;
     }
     return 0;
 }
 */
 #include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
    int a;
    char s[105];
    a=0;
    scanf("%s", s);
    for(int i=0; i<strlen(s); i++)
        if(s[i]<91) a++;
    if(s[0]>96 && a==strlen(s)-1) {
        printf("%c", s[0]-32);
        for(int i=1; i<strlen(s); i++)
         printf("%c", s[i]+32);
    }
    else if(a==strlen(s))
     for(int i=0; i<strlen(s); i++)
      printf("%c", s[i]+32);
    else printf("%s", s);
    return 0;
}


