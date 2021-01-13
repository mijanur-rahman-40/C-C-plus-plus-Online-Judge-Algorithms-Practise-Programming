#include<bits/stdc++.h>
using namespace std;
bool ans(string a,string b)
{
    if (a==b)
          return true;
    int len1 = a.size(),len2 = b.size();
    if (len1%2==1 || len2%2==1)
          return false;
    string s1 = a.substr(0,len1/2),s2 = a.substr(len1/2,len1/2);
    string t1 = b.substr(0,len2/2),t2 = b.substr(len2/2,len2/2);
    return (ans(s1,t2) && ans(s2,t1))||(ans(s1,t1) && ans(s2,t2));
}
int main()
{
     string str1,str2;
    cin >> str1;cin >> str2;
    //int ans1=ans(s1,s2);
    if (ans(str1,str2))
        puts("YES");
    else
        puts("NO");
    return 0;
}
/*
aaba
abaa
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<char>str1,str2,str3,str4;
     string str11,str22;
     cin>>str11>>str22;
     int flag=0,flag1=0;
     int len1=str11.size();
     int len2=str22.size();
     for(int i=0;i<len1/2;i++){
         str1.push_back(str11[i]);
     }
     for(int i=len1/2;i<len1;i++){
          str2.push_back(str11[i]);
     }
     for(int i=0;i<len2/2;i++){
         str3.push_back(str22[i]);
     }
     for(int i=len2/2;i<len2;i++){
          str4.push_back(str22[i]);
     }
     sort(str1.begin(),str1.end());
     sort(str2.begin(),str2.end());
     sort(str3.begin(),str3.end());
     sort(str4.begin(),str4.end());
     for(int i=0;i<len1/2;i++){
          if(str1[i]==str4[i]){
               continue;
          }
          else
               flag=0;
     }
     for(int i=0;i<len1/2;i++){
          if(str2[i]==str3[i]){
               continue;
          }
          else
               flag1=0;
     }
if(flag==1 && flag1==1){
          cout<<"yes";
}
     else
     cout<<"no";

}
*/
