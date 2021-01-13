

/*
#include <bits/stdc++.h>

using namespace std;

int tst;
string str,min_str;
int main() {
  cin >> tst;
  while (tst--) {
    min_str= "Z";
    cin >>str;
    int len= str.size();
    str+=str;
    for (int i = 0; i <len; ++i) {
      min_str= min(min_str,str.substr(i,len));
       }
    cout << min_str<< endl;

  }
  return 0;
}
*/
ae code ta bol ase

#include<bits/stdc++.h>
using namespace std;
string str,str1="",str2="",ans="",str4="";
int main()
{
     vector<char>vec;
     int tst;
     cin>>tst;
     while(tst--){
          cin>>str; int  len=str.size();
      str4=str;
          for(int i=0;i<str.size();i++){
               vec.push_back(str[i]);
          }
               sort(vec.begin(),vec.end());
               for(int i=0;i<str.size();i++){
                    str2+=vec[i];
               }
               str+=str;
               for(int i=0;i<str4.size()-1;i++){
                          str1=str.substr(i,len);
                          if(str4[i]==str2[0]){
                                   ans=str1;
                continue;
                          }
               }
            cout<<ans<<endl;
          vec.clear();
          ans.clear();
          str4.clear();
          str.clear();
          str1.clear();
          str2.clear();
     }
     return 0;
}

