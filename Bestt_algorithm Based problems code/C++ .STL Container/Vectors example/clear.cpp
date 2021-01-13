// clearing vectors
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int>v;
  v.push_back (100);
  v.push_back (200);
  v.push_back (300);
   cout << "myvector contains:";
  for (unsigned i=0; i<v.size(); i++)
    cout <<' '<<v[i];
    cout <<endl;

  v.clear();
  v.push_back (1101);
  v.push_back (2202);

  cout << "myvector contains:";
  for (unsigned i=0; i<v.size(); i++)
   cout << ' ' <<v[i];
  cout <<endl;

  return 0;
}
