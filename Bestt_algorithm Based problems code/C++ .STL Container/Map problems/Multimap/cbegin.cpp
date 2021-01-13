#include <iostream>
#include <map>
using namespace std;
int main ()
{
  multimap<char,int> mymultimap = { {'x',100}, {'y',200}, {'x',300} };

  // print content:
  cout << "mymultimap contains:";
  for (auto it = mymultimap.cbegin(); it != mymultimap.cend(); ++it)
    cout << " [" << it->first << ':' << it->second << ']';
  cout << '\n';

  return 0;
}
Edit & Run

