#include<iostream>
using namespace std;
int main()
{
    string str;
    int i,len;
    cin>>i;
    while(i--){
    cin>>str;
    len=str.size();
    if(len>10){
    cout<<str[0]<<(len-2)<<str[len-1]<<endl;
}
else{
    cout<<str<<endl;
}
    }
return 0;
}
/*
#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s.length() > 10)
        {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
