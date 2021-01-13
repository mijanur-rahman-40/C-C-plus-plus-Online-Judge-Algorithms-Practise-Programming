
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    list<char> li;
    list<char>::iterator it;
    while(getline(cin,str))
    {
        li.clear();
        it = li.begin();
        for(int i=0;i<str.size();++i)
        {
            if(str[i]=='['){
                it = li.begin();
            }
            if(str[i]==']'){
                it = li.end();
            }
            if(str[i]!='[' && str[i]!=']'){
                li.insert(it,str[i]);
            }
        }
        for(it=li.begin();it!=li.end();it++)
            printf("%c",*it);
        printf("\n");
    }
    return 0;
}
