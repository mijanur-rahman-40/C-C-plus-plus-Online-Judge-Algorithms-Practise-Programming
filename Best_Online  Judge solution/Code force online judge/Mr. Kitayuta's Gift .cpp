#include<bits/stdc++.h>
using namespace std;
bool check_PL(string s)
{
    string str;
    str=s;
   reverse(s.begin(),s.end());
   if(str==s)
   {
       return true;
   }
   else
    return false;
     }
int main()
{
    string s;
    cin>>s ;
     for(char c='a';c<='z';c++){
        for(int i=0;i<=s.size();i++){
            string a = s;
            string b=" ";
            b[0]=c;
            a.insert(i,b);
            if (check_PL(a)){
                cout<<a<<endl;
                //cout<<b<<endl;
                return 0;
            }
     }
   }
    cout<<"NA"<<endl;
    return 0;
}
