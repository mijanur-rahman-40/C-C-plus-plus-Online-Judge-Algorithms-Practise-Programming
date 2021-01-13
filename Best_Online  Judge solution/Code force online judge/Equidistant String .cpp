#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int coun  = 0;
   for(int i=0; i<str1.size(); i++){
    if(str1[i] != str2[i]){
        coun++;
    }
   }
   if(coun%2){
    cout<<"impossible"<<endl;
    return 0;
   }
   int siz = 0;
   string str="";
    for(int i=0; i<str1.size(); i++){
        if(str1[i] == str2[i]){
            str = str + str1[i];
            continue;
        }
         if(siz%2==0){
                str = str + str2[i];
            }
            else
                str = str + str1[i];
                siz++;
        }
    cout<<str<<endl;
}
