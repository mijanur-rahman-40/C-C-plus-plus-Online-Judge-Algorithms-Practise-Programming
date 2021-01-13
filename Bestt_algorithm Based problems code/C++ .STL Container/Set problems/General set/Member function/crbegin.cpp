#include <iostream>
#include <set>
using namespace std;
int main ()
{
    int  myse[]= {50,20,60,10,25};
  set<int>myset(myse,myse+5);
  set<int>::iterator rit;

  cout << "myset backwards:";
  for ( rit=myset.rbegin(); rit != myset.rend(); ++rit)
    cout << ' ' << *rit;

  cout << '\n';

  return 0;
}
