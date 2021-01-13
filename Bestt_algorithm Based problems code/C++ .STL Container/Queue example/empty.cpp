#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main ()
{
  std::queue<std::string> myqueue;

  myqueue.emplace ("First sentence");
  myqueue.emplace ("Second sentence");
 myqueue.emplace ("third sentence");
  while (!myqueue.empty())
  {
    std::cout << myqueue.front() << '\n';
    myqueue.pop();
  }

  return 0;
}
