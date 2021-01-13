// vector::back
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int>v;
   v.push_back(10);

  while(v.back()!= 0)
  {
    v.push_back(v.back()-1);
  }
  cout<<"myvector contains:";
  for (unsigned i=0;i<v.size();i++)
    cout<<' '<<v[i];
    cout<<endl;

  return 0;
}
