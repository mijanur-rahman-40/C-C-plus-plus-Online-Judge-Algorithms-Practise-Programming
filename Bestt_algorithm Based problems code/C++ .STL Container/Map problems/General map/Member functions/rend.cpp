#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;

  mymap['1'] = 100;
  mymap['d'] = 200;
  mymap['3'] = 300;

  // show content:
  map<char,int>::reverse_iterator rit;
  for (rit=mymap.rbegin(); rit!=mymap.rend(); ++rit)
    cout << rit->first << " => " << rit->second << '\n';

  return 0;
}
