#include <iostream>
#include <queue>
using namespace std;
int main ()
{
  priority_queue<int> foo,bar;
  foo.push (15);
  foo.push(30);
  foo.push(10);
  bar.push (101);
   bar.push(202);

  foo.swap(bar);

  cout << "size of foo: " << foo.size() <<endl;
  cout<<"sorting elements for foo"<<endl;
  while(!foo.empty()){
    cout<<foo.top()<<" ";
    foo.pop();
  }
  cout<<endl;
  cout << "size of bar: " << bar.size() <<endl;
   cout<<"sorting elements for bar"<<endl;
  while(!bar.empty()){
    cout<<bar.top()<<" ";
    bar.pop();
  }

  return 0;
}
