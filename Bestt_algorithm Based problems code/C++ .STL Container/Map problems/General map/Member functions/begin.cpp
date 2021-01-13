
#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;
   map<char,int>::iterator it;
   mymap.insert(pair<char,int>('b',100));
    mymap.insert(pair<char,int>('c',100));
     mymap.insert(pair<char,int>('d',100));
//  mymap['b']= 100;
//  mymap['b']= 200;
//  mymap['c']= 300;
  for (it=mymap.begin()+1; it!=mymap.end(); ++it)
      cout << it->first << " = " << it->second <<endl;

  return 0;
}
/* output
a = 200
b = 100
c = 300
*/



