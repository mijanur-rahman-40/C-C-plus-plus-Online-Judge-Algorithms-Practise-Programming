
//neser code a somossa
#include<bits/stdc++.h>
using namespace std;
char ch[3000]={0};
int main()
{
 char a[3000],b[3000],str[3000];
 //memset(m,NULL,sizeof(m));
 ch['A']='A'; ch['E']='3'; ch['H']='H'; ch['I']='I';
 ch['J']='L'; ch['L']='J'; ch['M']='M'; ch['O']='O';
 ch['S']='2'; ch['T']='T'; ch['U']='U'; ch['V']='V';
 ch['W']='W'; ch['X']='X'; ch['Y']='Y'; ch['Z']='5';
 ch['1']='1'; ch['2']='S'; ch['3']='E'; ch['5']='Z';
 ch['8']='8';
 while(scanf("%s",str)==1){
  int len=strlen(str);
  int j=0;
  for(int i=len-1;i>=0;i--)
  {
     a[j]=str[i];
      b[j]=ch[str[i]];
     j++;
  }


  if (str==a && str==b)
  cout<<str<<" -- is a mirrored palindrome."<<endl<<endl;
  else if (str==a && str!=b)
   cout<<str<<" -- is a regular palindrome."<<endl<<endl;
  else if (str!=a && str==b)
  cout<<str<<" -- is a mirrored string."<<endl<<endl;
  else
   cout<<str<<" -- is not a palindrome."<<endl<<endl;
 }
 return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s,a,b;
 char m[3000];

 memset(m,NULL,sizeof(m));
 m['A']='A';
 m['E']='3';
 m['H']='H';
 m['I']='I';
 m['J']='L';
 m['L']='J';
 m['M']='M';
 m['O']='O';
 m['S']='2';
 m['T']='T';
 m['U']='U';
 m['V']='V';
 m['W']='W';
 m['X']='X';
 m['Y']='Y';
 m['Z']='5';
 m['1']='1';
 m['2']='S';
 m['3']='E';
 m['5']='Z';
 m['8']='8';
 while(cin>>s){
  a=b="";
  int len=s.size();
  for(int i=len-1;i>=0;i--)
  {
      a+=s[i];
      b+=m[s[i]];
  }
  if (s==a && s==b)
  cout<<s<<" -- is a mirrored palindrome."<<endl<<endl;
  else if (s==a && s!=b)
   cout<<s<<" -- is a regular palindrome."<<endl<<endl;
  else if (s!=a && s==b)
  cout<<s<<" -- is a mirrored string."<<endl<<endl;
  else
   cout<<s<<" -- is not a palindrome."<<endl<<endl;
 }
 return 0;
}
