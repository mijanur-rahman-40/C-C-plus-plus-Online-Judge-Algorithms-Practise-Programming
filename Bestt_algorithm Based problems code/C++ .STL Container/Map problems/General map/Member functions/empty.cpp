#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;
  map<char,int>::iterator it;

  mymap['c']=10;
  mymap['d']=20;
  mymap['a']=30;

  while (!mymap.empty())
  {

    // for (it=mymap.begin();it!=mymap.end();it++){
    cout << mymap.begin()->first << " => " << mymap.begin()->second << '\n';
    //cout << it->first << " => " << it->second << '\n';
    mymap.erase(mymap.begin());
    }
  return 0;
}
