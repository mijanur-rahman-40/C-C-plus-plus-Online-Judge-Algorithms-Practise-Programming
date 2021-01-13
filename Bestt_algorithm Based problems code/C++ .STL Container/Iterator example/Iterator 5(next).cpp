// next example
#include<bits/stdc++.h>
#include <iterator>     // std::next
#include <list>         // std::list
#include <algorithm>    // std::for_each
using namespace std;
int main () {
  list<int> mylist;
  for (int i=0; i<10; i++) mylist.push_back (i*10);

  cout << "mylist:";
  for_each (mylist.begin(),mylist.begin(),5),[](int x) {cout << ' ' << x;} );

  cout << '\n';

  return 0;
}
