#include <iostream>
#include <map>
using namespace std;
int main ()
{
  multimap<char,int> mmap;

  mmap.insert (pair<char,int>('a',10));
  mmap.insert (pair<char,int>('a',10));
  mmap.insert (pair<char,int>('c',150));


  for (multimap<char,int>::iterator it=mmap.begin(); it!=mmap.end(); ++it)
   //cout<< (*it).first << " => " << (*it).second << '\n';
   cout<< it->first << " => " <<it->second <<endl;

  return 0;
}
