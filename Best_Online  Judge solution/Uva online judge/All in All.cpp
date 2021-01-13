
#include<bits/stdc++.h>
using namespace std;

int main(){

    string str1,str2;
    int siz;
   while(cin>>str1>>str2){
        siz=str1.size();
        int cont=0;

        for(int i=0;i<str2.size() && cont<siz;i++){
            if(str2[i]==str1[cont])
               cont++;
        }
        if(cont==siz)
          cout<<"Yes"<<endl;
        else
         cout<<"No"<<endl;
    }
    return 0;
}

