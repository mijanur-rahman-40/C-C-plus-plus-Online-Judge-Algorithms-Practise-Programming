
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int coun=0;
    for(int i=0;i<str.size();i++){
        if(isupper(str[i])){
            coun++;
        }
    }
    if(islower(str[0]) && coun==str.size()-1){
       str[0]=toupper(str[0]);
        for(int i=1;i<str.size();i++){
             str[i]=tolower(str[i]);
        }
        cout<<str;
    }
    else if(coun==str.size()){
        for(int i=0;i<str.size();i++){
                str[i]=tolower(str[i]);
        }
            cout<<str;
    }
        else{
            cout<<str;
        }
    cout<<endl;
return 0;
}

