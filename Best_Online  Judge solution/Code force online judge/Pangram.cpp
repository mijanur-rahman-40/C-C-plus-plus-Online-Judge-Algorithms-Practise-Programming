
/*
#include <stdio.h>
#include <string.h>
char str1[100]={0};
int str2[100];
int main()
{
    int n,i;
    int flag=1;
        scanf("%d",&n);

         scanf("%s",str1);
        for(i=0;i<strlen(str1);i++){
        if(str1[i]>='A' && str1[i]<='Z'){
            str2[str1[i]-'A']=1;
        }
           else if(str1[i]>='a' && str1[i]<='z'){
            str2[str1[i]-'a']=1;
           }
        }
            for(i=0;i<26;i++){
                if(str2[i]==0){
                    printf("NO\n");
                    return 0;
                }
            }
        printf("YES\n");
}
 // memset(str1,0,sizeof(str1));

*/
/* #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char str;
    int i,hash[26]={0};
    while(scanf("%c",&str)==1)
    {
        if(str>=65 && str<=90)
        {
           hash[str-65]++;
        }
        else if(str>=97 && str<=122)
        {
            hash[str-97]++;
        }
    }
     for(i=0;i<26;i++)
     {
        if(hash[i]==0)
            break;
     }
    if(i==26)
        printf("pangram\n");
    else
        printf("not pangram\n");
       return 0;

}


*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>mp;
    map<char,int>::iterator it;
    string str;
    int num;
    cin>>num>>str;
    for(int i=0;i<str.size();i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }
        mp[str[i]]++;
    }
    int coun=0;
    for(it=mp.begin();it!=mp.end();it++){
        coun++;
    }
    if(coun==26){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
