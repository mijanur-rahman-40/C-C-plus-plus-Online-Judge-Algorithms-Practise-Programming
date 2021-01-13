#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;

  mymap['a']=5;
  mymap['a']=19;
  mymap['b']=30;
  mymap['c']=30;
  //mymap['c']=50;


     pair<map<char,int>::iterator,map<char,int>::iterator> ret;
  ret = mymap.equal_range('b');

    cout << "lower bound points to: ";
     cout << ret.first->first << " => " << ret.first->second << '\n';

  cout << "upper bound points to: ";
    cout << ret.second->first << " => " << ret.second->second << '\n';

  return 0;
}
//for (std::multimap<char,int>::iterator it=ret.first; it!=ret.second; ++it)
      //std::cout << ' ' << it->second;
