#include <bits/stdc++.h>

using namespace std;

int tst;
string str,min_str;
int main() {
  cin >> tst;
  while (tst--) {
    min_str= "Z";
    cin >>str;
    int len= str.size();
    str+=str;
    for (int i = 0; i <len; ++i) {
      min_str= min(min_str,str.substr(i,len));
       }
    cout << min_str<< endl;

  }
  return 0;
}
