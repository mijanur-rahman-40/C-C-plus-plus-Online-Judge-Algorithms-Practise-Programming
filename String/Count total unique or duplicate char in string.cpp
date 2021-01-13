/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     map<char,int>mp;
      map<char,int>::iterator it;
     string st;
     cin>>st;
     char ch;
     int size=st.size(),i=0;
     while(size>0){
            ch=st[i];
          mp[ch]++;
          i++;
          size--;
     }
     for(it=mp.begin();it!=mp.end();it++){
          printf("%c %d\n",it->first,it->second);
     }
     return 0;
}

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
     map<char,int>mp;
      map<char,int>::iterator it;
     char st[100];
     char ch;
     gets(st);
     int size=strlen(st),i=0;
     while(size>0){
            ch=st[i];
            if(ch!=' ')
          mp[ch]++;
          i++;
          size--;
     }
     for(it=mp.begin();it!=mp.end();it++){
          printf("%c %d\n",it->first,it->second);
     }
     return 0;
}
