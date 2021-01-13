
#include <iostream>
#include <set>
using namespace std;
int main ()
{
    int my[]={50,20,60,10,25};
  set<int>myset(my,my+5) ;

  cout << "myset contains:";
  for (auto it=myset.cbegin(); it != myset.cend(); ++it)
    cout << ' ' << *it;

  cout << '\n';

  return 0;
}
