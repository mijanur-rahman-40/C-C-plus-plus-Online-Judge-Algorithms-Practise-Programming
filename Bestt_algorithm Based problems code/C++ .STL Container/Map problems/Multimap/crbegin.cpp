
#include <iostream>
#include <map>

int main ()
{
  std::multimap<char,int> mymultimap = { {'x',100}, {'y',200}, {'x',300} };


  std::cout << "mymultimap backwards:";
  for (auto rit = mymultimap.crbegin(); rit != mymultimap.crend(); ++rit)
    std::cout << " [" << rit->first << ':' << rit->second << ']';
  std::cout << '\n';

  return 0;
}
