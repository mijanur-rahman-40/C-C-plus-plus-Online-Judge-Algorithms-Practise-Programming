#include <iostream>
#include <map>
using namespace std;
int main ()
{
  multimap<char,int> mmap;
  multimap<char,int>::iterator it;

  mmap.insert(pair<char,int>('b',80));
  mmap.insert(pair<char,int>('b',120));
  mmap.insert(pair<char,int>('q',360));

  cout << "mymultimap contains:\n";
  for (it=mmap.begin(); it!=mmap.end(); ++it)
   cout << (*it).first << " => " << (*it).second << '\n';

  mmap.clear();

  mmap.insert(std::pair<char,int>('a',11));
  mmap.insert(std::pair<char,int>('x',22));

  cout << "mymultimap contains:\n";
  for (it=mmap.begin(); it != mmap.end(); ++it)
    cout << (*it).first << " => " << (*it).second << '\n';

  return 0;
}
