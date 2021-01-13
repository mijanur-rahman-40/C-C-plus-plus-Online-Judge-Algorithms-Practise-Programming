#include <iostream>
#include <map>
using namespace std;
int main ()
{
   map<char,int> mymap;
  // map<char,int>::iterator it;

  mymap['b'] = 100;
  mymap['a'] = 200;
  mymap['c'] = 300;

 cout << "mymap contains:";
  for (auto it= mymap.cbegin(); it != mymap.cend(); ++it)
    cout << " [" << it->first << ':' << it->second << ']';
     cout << '\n';

  return 0;
}
/* output   [a:200] [b:100] [c:300] */
