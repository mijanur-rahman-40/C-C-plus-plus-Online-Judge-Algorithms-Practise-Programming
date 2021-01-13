/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  num,mod;
    int flag=0;
    cin>>num;
   while(num){
    mod=num%10;
    num=num/10;
    if(mod==4 || mod==7){
        flag++;
    }
   }
   //cout<<flag;
    if(flag==4 || flag==7){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //long long  num,mod;
    int flag=0;  string str;
    cin>>str;

    //str=to_string(num);
   for(int i=0;i<str.size();i++){
    if(str[i]=='4' || str[i]=='7'){
        flag++;
    }
   }
   //cout<<flag;
    if(flag==4 || flag==7){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
