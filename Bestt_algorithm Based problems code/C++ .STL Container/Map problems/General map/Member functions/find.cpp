#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;
  map<char,int>::iterator it;

  mymap['a']=50;
  mymap['b']=100;
  mymap['c']=150;
  mymap['d']=200;
  mymap['a']=20;

  it = mymap.find('b');
  if (it != mymap.end())
    mymap.erase (it);

  // print content:
  cout << "elements in mymap:" << '\n';
  cout << "a => " << mymap.find('a')->second << '\n';
  cout << "c => " << mymap.find('c')->second << '\n';
  cout << "d => " << mymap.find('d')->second << '\n';

  return 0;
}
/*
#include <iostream>
#include <map>

int main()
{
    std::multimap<int,char> example = {{1,'a'},{2,'b'}};

    auto search = example.find(2);
    if(search != example.end()) {
        std::cout << "Found " << search->first << " " << search->second << '\n';
    }
    else {
        std::cout << "Not found\n";
    }
}
*/

