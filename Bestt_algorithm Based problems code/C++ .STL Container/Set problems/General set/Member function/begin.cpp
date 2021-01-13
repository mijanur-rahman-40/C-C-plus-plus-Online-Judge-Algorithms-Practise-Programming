
#include <iostream>
#include <set>
using namespace std;
int main ()
{
  int myints[] = {75,23,65,13,13};
  set<int> myset (myints,myints+5);

  cout << "myset contains:";
  for (set<int>::iterator it=myset.begin(); it!=myset.end(); ++it)
    cout << ' ' << *it;

  cout << '\n';

  return 0;
}
