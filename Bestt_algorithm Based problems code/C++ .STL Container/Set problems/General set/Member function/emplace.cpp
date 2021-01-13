#include <iostream>
#include <set>
#include <string>
using namespace std;
int main ()
{
  std::set<std::string> myset;

  myset.emplace("foo");
  myset.emplace("bar");
  auto ret = myset.emplace("foo");

  if (!ret.second)
    std::cout << "foo already exists in myset\n";

  return 0;
}
