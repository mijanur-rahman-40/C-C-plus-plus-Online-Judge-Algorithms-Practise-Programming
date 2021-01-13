#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int num;
    cin>>num;
    for(int i=0; i<num; i++){
        //cout<<str.substr(i*str.size()/num,str.size()/num)<<" ";
        //cout<<str.substr(2,3)<<" ";//cde
       // cout<<str.substr(2,8)<<" ";// cdefghij
      // cout<<str.substr(2,str.size())<<" "; // cdefghij
        //cout<<str.substr(2,7)<<" "; //cdefghi
        cout<<str.substr(2,10)<<" ";//cdefghij

    }
    return 0;
}
// abcdefghij
