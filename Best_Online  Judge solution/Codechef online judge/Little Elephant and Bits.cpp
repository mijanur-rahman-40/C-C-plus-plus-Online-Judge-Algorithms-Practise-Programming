#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    bool flag = false;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='0')
        {
            str.erase(i,1);
            flag = true;
            cout<<str<<endl;
            return 0;
        }
    }
    if(flag == false) str.erase(1,1);
    cout<<str<<endl;
    return 0;
}
