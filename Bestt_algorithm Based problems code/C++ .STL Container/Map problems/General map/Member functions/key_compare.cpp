#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;
 map<char,int>::key_compare mycomp = mymap.key_comp();

  mymap['w']=100;
  mymap['b']=200;
  mymap['a']=300;

  cout << "mymap contains:\n";
  char highest = mymap.rbegin()->first;     // key value of last element
  map<char,int>::iterator it = mymap.begin();
  do {
   cout << it->first << " => " << it->second << '\n';
  } while ( mycomp((*it++).first, highest) );
  return 0;
}
