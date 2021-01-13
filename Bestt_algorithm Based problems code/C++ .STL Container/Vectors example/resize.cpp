// resizing vector
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int>v;

  // set some initial content:
  for (int i=1;i<10;i++){
   v.push_back(i);
  }
  v.resize(5);
  v.resize(8,100);
   v.resize(12);

  cout << "myvector contains:";
  for (int i=0;i<v.size();i++)
    cout<<' '<<v[i];
  cout << '\n';

  return 0;
}
