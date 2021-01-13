#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    char str[] = { 'h', 'e', 'l', 'l', 'o' };
    string str1;
    int num = 0;
    cin >>str1;
    for (int i = 0; i < str1.length(); i++){
        if (str1[i]==str[num]){
            num++;
        }
    }
    if(num==5){
    cout <<"YES"<<endl;
    }
    else{
            cout<<"NO"<<endl;
    }
    return 0;
}

