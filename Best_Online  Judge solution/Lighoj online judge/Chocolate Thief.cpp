#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst,j=1;cin>>tst;
     while(tst--){
          int num,flag=1,mx=0,mn=12157643;
          string str;cin>>num;
          vector<string>st;vector<int>vec;
          for(int i=0;i<num;i++){
               int h,w,l;cin>>str>>h>>w>>l;
               int volume=h*w*l;
               st.push_back(str);  vec.push_back(volume);
               mx=max(mx,volume);
               mn=min(mn,volume);
          }
          string str1=" ",str2=" ";
          if(mx-mn>0){
               for(int i=0;i<vec.size();i++){
                    if(mx==vec[i]){
                        str1=st[i];
                    }
                    else if(mn==vec[i]){
                         str2=st[i];
                    }}}
          else{
               flag=0;
          }
          if(flag!=0){
               cout<<"Case "<<j++<<": "<<str1<<" took chocolate from "<<str2<<endl;
          }
          else
               printf("Case %d: no thief\n",j++);
     }
     return 0;
}

