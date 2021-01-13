#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;
  char c;

  mymap ['a']=101;
  mymap ['c']=202;
  mymap ['k']=303;

  for (c='a'; c<'h'; c++)
  {
    cout << c;
    if (mymap.count(c)==0)
        cout << " is not an element of mymap.\n";
    else

      cout << " is an element of map.\n";
  }

  return 0;
}
