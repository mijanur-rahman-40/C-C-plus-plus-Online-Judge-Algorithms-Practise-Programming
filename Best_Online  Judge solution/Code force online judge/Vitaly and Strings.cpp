
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str1,str2;
   while(cin>>str1>>str2){
        int len =str1.size();
        for (int i = len-1; i >= 0; --i){
            if (str1[i] != 'z'){
                str1[i]=str1[i]+1;
                break;
            }
            else
               str1[i] = 'a';
        }
        //cout<<str1<<str2;
        if (str1!=str2)
        {
             cout<<str1<<endl;
        }
        else
          cout<<"No such string"<<endl;
    }
    return 0;
}

