#include <iostream>
#include <map>
using namespace std;
int main ()
{
  map<char,int> mymap;
  map<char,int>::iterator itlow,itup;

  mymap['z']=20;
  mymap['b']=40;
  mymap['c']=60;
  mymap['g']=70;
  mymap['e']=80;
  mymap['f']=100;
//   mymap['f']=100;
//    mymap['g']=100;

  itlow=mymap.lower_bound ('b');
  itup=mymap.upper_bound ('d');
  mymap.erase(itlow,itup);
  //mymap.erase(itlow);
  //cout << itup->first << " => " << itup->second << '\n';
  //cout << itlow->first << " => " << itlow->second << '\n';
   //for (map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    //cout << itup->first << " => " << itup->second << '\n';

    for (map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
    cout << it->first << " => " << it->second << '\n';

  return 0;
}
