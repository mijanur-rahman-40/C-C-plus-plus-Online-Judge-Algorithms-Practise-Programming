#include <iostream>
#include <queue>
#include <string>
using namespace std;
int main ()
{
  queue<string> myqueue;
for(int i=0; i<5;i++){
    string str;
    cin>>str;
    myqueue.emplace (str);
}
  //myqueue.emplace ("First sentence");
  //myqueue.emplace ("Second sentence");

  cout << "myqueue contains:\n";
  while (!myqueue.empty())
  {
    cout << myqueue.back() << '\n';
    myqueue.pop();
  }

  return 0;
}
