/*
#include<bits/stdc++.h>
using namespace std;
int mp[60];
int main()
{
    int n,coun=0;
    cin>>n;
    string str;
    cin>>str;
    memset(mp,0,sizeof(mp));
    for(int i =0;i<str.size(); i++){
       if(islower(str[i]))
            mp[str[i]-'a']++;
        else{
            if(mp[str[i]-'A'])
                mp[str[i]-'A'] --;
            else
                coun++;
        }
    }
    printf("%d\n",coun);
}
*/


#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main()
{
    int num; cin>>num;
    string str;
    cin>>str;
    int coun=0;
    for(int i=0; i<str.size()-1; i+=2)
    {
        mp[str[i]]++;
            if(mp[str[i+1]+32]==0){
                coun++;
            }
            else
                mp[str[i+1]+32]--;
        }
    cout<<coun<<endl;
return 0;
}


//  problem ase
//xYyXzZaZ
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     map<char,int >mp;
     map<char,int >::iterator it;
     int n;
     cin>>n;
     string str;
     cin>>str;
     for(int i=0;i<str.size();i++){
          mp[str[i]]++;
     }
     int mx=0;
     for(it=mp.begin();it!=mp.end();it++){
          mx=max(mx,it->second);
     }
     if(mx==1){
          cout<<"0"<<endl;
     }
     else
          cout<<mx<<endl;
     return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>mp; int num;
    cin>>num;
    string str,str1=" "; char ch;
    cin>>str;
    int coun=0;
    for(int i=0;i<str.size();i++){
      if(islower(str[i])){
            mp[str[i]]++;
      }
      else{
        if(!mp.count(str[i]+32)){
            coun++;
            str.clear(str[i]+32);
      }
    }
    cout<<coun<<endl;
}

*/
