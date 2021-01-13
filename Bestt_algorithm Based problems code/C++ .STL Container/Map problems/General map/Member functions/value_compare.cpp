#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;

  mymap['x']=1001;
  mymap['y']=2002;
  mymap['z']=3003;

   cout << "mymap contains:\n";

  pair<char,int> highest = *mymap.rbegin();

  map<char,int>::iterator it = mymap.begin();
  do {
    cout << it->first << " => " << it->second << '\n';
  } while ( mymap.value_comp()(*it++, highest) );

  return 0;
}
