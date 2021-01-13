#include <iostream>
#include <memory>
#include <vector>
using namespace std;
int main() {
  typedef vector<int> Container;
  typedef allocator<int> Allocator;

  if (uses_allocator<Container,Allocator>::value) {
    Allocator alloc;
    Container foo (5,10,alloc);
    for (auto x:foo) cout << x << ' ';
  }
  cout << '\n';
  return 0;
}


/*
10 10 10 10 10

*/
