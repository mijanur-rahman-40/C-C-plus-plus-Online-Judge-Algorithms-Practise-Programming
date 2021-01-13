// map::crbegin/crend
#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;

  mymap['b'] = 100;
  mymap['a'] = 200;
  mymap['c'] = 300;

  cout << "mymap backwards:";
  for (auto rit = mymap.crbegin(); rit != mymap.crend(); ++rit)
    cout << " [" << rit->first << ':' << rit->second << ']';
  cout << '\n';

  return 0;
}
