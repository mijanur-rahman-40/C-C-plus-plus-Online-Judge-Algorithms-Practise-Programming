#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;
 mymap['c'] = 300;
  mymap['b'] = 100;
  mymap['a'] = 200;
  mymap['c'] = 300;

  cout << "mymap backwards:"<<endl;
  for (auto it = mymap.crbegin(); it != mymap.crend(); ++it)
    cout <<it->first << ">=" << it->second <<endl;

  return 0;
}
/*
output
 c>=300
  [b>=100]
  [a>=200]
  */
