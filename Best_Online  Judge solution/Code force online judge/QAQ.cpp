#include<bits/stdc++.h>
using namespace std;
int main()
{
     string str;
     int coun_Seq =  0;
     cin>>str;
     for(int i=0; i<str.size(); i++){
          for(int j=i+1; j<str.size(); j++){
              for(int k=j+1; k<str.size(); k++){
               if(str[i] == 'Q' && str[j] == 'A' && str[k] == 'Q'){
                    coun_Seq++;
                  }
              }
          }
     }
     cout<<coun_Seq++;
}
