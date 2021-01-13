#include <iostream>
#include <queue>
using namespace std;
int main ()
{
  priority_queue<int,vector<int>,greater<int> >mypq;
  //priority_queue<int>mypq;

  mypq.push(30);
  mypq.push(100);
  mypq.push(25);
  mypq.push(40);

  cout << "Popping out elements...";
  while (!mypq.empty())
  {
     cout <<"Top ="<< mypq.top()<<endl;
     mypq.pop();
  }
  cout << '\n';

  return 0;
}
