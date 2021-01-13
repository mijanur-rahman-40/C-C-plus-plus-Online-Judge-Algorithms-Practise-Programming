#include <iostream>
#include <map>
using namespace std;
int main ()
{
  multimap<char,int> my;

  my.insert(make_pair('x',50));
  my.insert(make_pair('y',100));
  my.insert(make_pair('y',150));
  my.insert(make_pair('y',200));
  my.insert(make_pair('z',250));
  my.insert(make_pair('z',300));

  for (char c='x'; c<='z'; c++)
  {
    cout<<"There are"<< my.count(c)<<" elements with key "<< c << ":";
    multimap<char,int>::iterator it;
    for (it=my.equal_range(c).first; it!=my.equal_range(c).second; ++it)
      cout << ' ' << (*it).second;
   cout << '\n';
  }

  return 0;
}
