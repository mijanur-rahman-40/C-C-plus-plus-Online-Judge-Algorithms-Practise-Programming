#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    scanf("%d",&num);
    string str;
    cin>>str;
    int flgg = 0;
    for(int i=0;  i<str.size()-1; i++){
        if(str[i] == str[i+1]){
        flgg = 1;
        }
    }
    if(flgg == 1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
