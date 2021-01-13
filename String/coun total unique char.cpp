#include<bits/stdc++.h>
using namespace std;
int arr[30];
int main()
{
    string str;
    cin>>str;
    int coun=0;
    for(int i=0; i<str.size(); i++){
        if(arr[str[i]-'a']==0){
            coun++;
            arr[str[i]-'a']=1;
        }
    }
    cout<<coun;
}
