// vector::operator[]
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int>v(10);   // 10 zero-initialized elements

  //std::vector<int>::size_type sz = myvector.size();
  int sz=v.size();
  // assign some values:
  for (unsigned i=0; i<sz; i++)v[i]=i;

  // reverse vector using operator[]:
  for (unsigned i=0; i<sz/2; i++)
  {
    int temp;
    temp = v[sz-1-i];
    v[sz-1-i]=v[i];
    v[i]=temp;
  }

  cout << "myvector contains:";
  for (unsigned i=0; i<sz; i++)
    cout << ' ' << v[i];
    cout << '\n';

  return 0;
}
