#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;
  auto it = mymap.end();

  it = mymap.emplace_hint(it,'b',10);
  mymap.emplace_hint(it,'a',12);
  mymap.emplace_hint(mymap.end(),'c',14);

  cout << "mymap contains:";
  for (auto& x: mymap)
    cout << " [" << x.first << ':' << x.second << ']';
   cout << '\n';

  return 0;
}
