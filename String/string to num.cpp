/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string str1,str2,str3;
    str1=str[0];
    str2=str[1];
    str3=str1+str2;
    cout<<str3<<endl;
    int value = atoi(str3.c_str());
    cout<<value;
}

#include <sstream>
#include <string>
using namespace std;

string myStream = "45";
istringstream buffer(myString);
int value;
buffer >> value;   // value = 45
