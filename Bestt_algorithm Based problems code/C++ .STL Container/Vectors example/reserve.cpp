// vector::reserve
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int>::size_type sz;
//  int sz;
  vector<int>v;
  //sz = v.capacity();
  cout << "making vector grow:\n";
  for (int i=0; i<100; ++i) {
    v.push_back(i);
    if (sz!=v.capacity()) {
      sz = v.capacity();
      cout << "capacity changed: " << sz << '\n';
    }
  }

  vector<int> bar;
  sz = bar.capacity();
  bar.reserve(100);   // this is the only difference with v above
 cout << "making bar grow:\n";
  for (int i=0; i<100; ++i) {
    bar.push_back(i);
    if (sz!=bar.capacity()) {
      sz = bar.capacity();
      cout << "capacity changed: " << sz << '\n';
    }
  }
  return 0;
}
