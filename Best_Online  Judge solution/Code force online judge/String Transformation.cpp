#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[500100];
    cin>>str;
    char ch = 'a';
    for(int i=0; i<strlen(str); i++){
        if(str[i]<=ch && ch<='z'){
            str[i]=ch;
            ch++;
        }
    }
    if(ch == 'z'+1)
        cout<<str<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}
