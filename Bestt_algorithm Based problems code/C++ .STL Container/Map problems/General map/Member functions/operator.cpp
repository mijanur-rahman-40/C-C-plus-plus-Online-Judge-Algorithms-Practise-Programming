#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> first;
  map<char,int> second;

  first['x']=8;
  first['y']=16;
  first['z']=32;

  second=first;                // second now contains 3 ints
  first=map<char,int>();  // and first is now empty

  cout << "Size of first: " << first.size() << '\n';
  cout << "Size of second: " << second.size() << '\n';
 return 0;
}
