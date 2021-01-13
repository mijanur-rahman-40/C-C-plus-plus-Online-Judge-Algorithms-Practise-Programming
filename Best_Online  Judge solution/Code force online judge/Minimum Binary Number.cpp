#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int num;
    cin>>num>>str;
    int coun = 0;
    if(str.size() == 1){
    cout<<str<<endl;
    }
    else{
        for(int i=0; i<str.size(); i++){
            if(str[i] == '0')
                coun++;
        }
        cout<<"1";
        for(int i=0; i<coun; i++){
            cout<<"0";
        }
        cout<<endl;
    }
}
