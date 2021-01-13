

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string>st;
    string str;
    while(cin>>str)
    {
        string str1="";
        int len=str.size();
        for(int i=0;i<=len;i++){
           if(isalpha(str[i])){
            str1+=tolower(str[i]);
           }
           else if(str1!=""){
           st.insert(str1);
           str1="";
           }
        }
    }
    set<string>::iterator it;
    for ( it=st.begin(); it!=st.end();it++){
    cout<<*it<<endl;
    }
    return 0;
}

