


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[]={"jolteon","flareon","umbreon","leafeon","glaceon", "sylveon"};
    int len,flag,ans,gla1=0,gla2=0;
     string str1="vaporeon";string str2= "espeon";
      string str;
   while(cin>>len>>str){
          if(len==8){
               cout<<str1<<endl;
               gla1=1;
          }
           if(len==6){
               cout<<str2<<endl;
               gla2=1;
          }
          else{
          for(int i=0;i<6;i++)
        {
                flag=0;
                for(int j=0;j<7;j++)
                {
                   if(str[j]!='.'&&str[j]!=s[i][j])
                   {
                      flag=1;
                      break;
                   }
                }
                if(flag==0)
                ans=i;
            }
          }
          if(gla1==0 && gla2==0)
        cout<<s[ans]<<endl;
        gla1=0;gla2=0;
    }
    return 0;
}


/*
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    char s[][50]={"vaporeon", "jolteon","flareon" , "espeon",
    "umbreon", "leafeon", "glaceon", "sylveon"};
    int len[]={8,7,7,6,7,7,7,7};
    int n,i,j,k,l,m,flag,ans;
    char str[50];
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%s",str);
        for(i=0;i<8;i++)
        {
            if(len[i]==n)
            {
                flag=0;
                for(j=0;j<n;j++)
                {
                   if(str[j]!='.'&&str[j]!=s[i][j])
                   {
                      flag=1;
                      break;
                   }
                }
                if(flag==0)
                ans=i;
            }
        }
        printf("%s\n",s[ans]);
    }
    return 0;
}

*/

