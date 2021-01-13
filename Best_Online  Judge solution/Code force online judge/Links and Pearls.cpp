#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int o_count=0,desh_count=0;
    for(int i=0; i<str.size(); i++){
        if(str[i] == 'o') o_count++;
        if(str[i] == '-') desh_count++;
    }

    if(o_count == 0 || desh_count%o_count==0){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
