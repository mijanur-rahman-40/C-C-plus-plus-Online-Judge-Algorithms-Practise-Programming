#include <iostream>
#include <map>
using namespace std;
int main ()
{
  multimap<int,int> mymultimap;

  if (mymultimap.max_size() >= 1000)
  {
    for (int i=0; i<1000; i++)
      mymultimap.insert(make_pair(i,0));
    cout << "The multimap contains 1000 elements.\n";
  }
  else
    cout << "The multimap could not hold 1000 elements.\n";

  return 0;
}


