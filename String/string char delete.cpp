#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='0')
        {
            str.erase(i,1); // 1 length string delete

            cout<<str<<endl;
            return 0;
        }
    }
    cout<<str<<endl;
    return 0;
}


#include <iostream>
#include <string>

int main ()
{
  std::string str ("This is an example sentence.");
  std::cout << str << '\n';
                                           // "This is an example sentence."
  str.erase (10,8);                        //            ^^^^^^^^
  std::cout << str << '\n';
                                           // "This is an sentence."
  str.erase (str.begin()+9);               //           ^
  std::cout << str << '\n';
                                           // "This is a sentence."
  str.erase (str.begin()+5, str.end()-9);  //       ^^^^^
  std::cout << str << '\n';
                                           // "This sentence."
  return 0;
}
