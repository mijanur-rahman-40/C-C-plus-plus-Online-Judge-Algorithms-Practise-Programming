#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst;
     cin>>tst;
     while(tst--){
               int num,mod;
          cin>>num;
          char st,ch;
          string str="",str1;
          while(num!=0){
               mod=num%10;
               st=mod+'0';
               str+=st;
               num=num/10;
          }
          for(int i=0;i<str.size()/2;i++){
               swap(str[i],str[str.size()-1]);
          }
          cout<<str<<endl;
     }

}

