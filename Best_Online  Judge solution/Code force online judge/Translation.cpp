#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,str1;
    cin>>str>>str1;
    for(int i=0;i<str.size()/2;i++){
       swap(str[i],str[str.size()-i-1]);
    }
    //str2=reverse(vec.begin(),str.end());
    if(str==str1){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

}
