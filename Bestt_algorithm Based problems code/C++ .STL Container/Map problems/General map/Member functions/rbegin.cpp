#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<int,char> mymap;

  mymap[9] ='b';
  mymap[5] ='c';
  mymap[8] ='f';
  mymap.insert(make_pair(44,'g'));

  // show content:
  map<int,char>::reverse_iterator rit;
  for (rit=mymap.rbegin(); rit!=mymap.rend(); ++rit)
  cout << rit->first << " => " << rit->second << '\n';

  return 0;
}


