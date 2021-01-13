#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;

  mymap.emplace('x',100);
  mymap.emplace('y',200);
  mymap.emplace('z',100);

  cout << "mymap contains:"<<endl;
  for (auto &x: mymap)
   cout <<x.first << ">=" << x.second <<endl;
   //abave axis hoi na cout <<x->first << ">=" << x->second <<endl;
  cout << '\n';

  return 0;
}


/* output
mymap contains:
x>=100
y>=200
z>=100
*/

