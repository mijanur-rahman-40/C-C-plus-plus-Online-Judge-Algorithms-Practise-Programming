#include<bits/stdc++.h>
using namespace std;
bool is_palindrome(string str){
      string str1;
      str1=str;
      reverse(str.begin(),str.end());
      if(str==str1)
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
    if(is_palindrome(str)){
        cout<<str<<endl;
        return 0;
    }
    else{
        string str1;
        str1=str.substr(0,str.size()-1);
        reverse(str1.begin(),str1.end());
        cout<<str+str1<<endl;

    }
    return 0;
}
