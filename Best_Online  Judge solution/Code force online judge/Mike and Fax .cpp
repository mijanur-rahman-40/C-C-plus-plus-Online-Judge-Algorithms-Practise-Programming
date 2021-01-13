#include<bits/stdc++.h>
using namespace std;
bool check_pali(string str)
{
    string str1;
    str1=str;
    reverse(str.begin(),str.end());
    if(str1==str)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    string str;
    cin>>str;
    int num,flag=0; cin>>num;
    if(str.size()%num!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        for(int j=0; j<num; j++){
    if(check_pali(str.substr(j*str.size()/num,str.size()/num))==true){
               flag=1;
            }
           else
           {
               flag=0;
               break;
           }
        }
    }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
          cout<<"NO"<<endl;
        }
    return 0;
}
