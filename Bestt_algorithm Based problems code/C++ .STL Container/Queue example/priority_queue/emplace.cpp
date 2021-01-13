#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main ()
{
  priority_queue<string> mypq;
string str,str1;
/*
  mypq.emplace("orange");
  mypq.emplace("strawberry");
  mypq.emplace("apple");
  mypq.emplace("pear");

  */
  mypq.emplace("2");
  mypq.emplace("st");
  mypq.emplace("p");
  mypq.emplace("and");
  cout << "mypq contains:";
  while (!mypq.empty())
  {
    cout << ' ' << mypq.top();
     mypq.pop();
  }
 cout << '\n';
  return 0;
}
/*
strawberry pear orange apple

*/

