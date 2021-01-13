// vector::cbegin/cend
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int>v={10,20,30,40,50};
 // vector<int>v(5);
        cout<<"myvector contains:";
  //for(vector<int>::iterator it=v.cbegin();it!=v.cend();++it)
  for(auto it=v.cbegin();it!=v.cend();++it)
    cout << ' ' << *it;
    //for(int i=0;i<)
  cout << endl;
  return 0;
}
