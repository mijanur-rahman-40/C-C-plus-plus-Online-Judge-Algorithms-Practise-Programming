#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;
   map<char,int>::iterator it;
  mymap['v']=107;
  mymap['z']=200;
  mymap['f']=309;
   mymap['b']=210;
    mymap['j']=230;
     mymap['x']=228;
      mymap['l']=220;

  cout << "mymap contains:\n";
  for (it=mymap.begin(); it!=mymap.end(); ++it)
    cout << it->first << " => " << it->second << '\n';

    mymap.clear();
  mymap['u']=11;
  mymap['t']=21;
   mymap['n']=28;
    mymap['q']=25;

  cout << "mymap contains:\n";
  for (it=mymap.begin(); it!=mymap.end(); ++it)
    cout << it->first << " => " << it->second << '\n';

  return 0;
}
