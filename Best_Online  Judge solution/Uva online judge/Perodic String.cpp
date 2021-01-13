
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst;
     cin>>tst;
    getchar();
     bool flag = false;
      while(tst--){
            if(flag) printf("\n"); flag = true;
            string str;
           cin>>str;
           int len=str.length();
           for(int i=1;i<=len;i++){
                 string concat="";
                 string subs=str.substr(0,i);
                 int slen=subs.length();
                 for(int j=1; j<=len/slen; j++){
                     concat+=subs;
                 }
                 if(concat == str){
                     cout<<slen<<endl;
                     break;
                 }
           }
    }
    return 0;
}
//abababababababbababababab
