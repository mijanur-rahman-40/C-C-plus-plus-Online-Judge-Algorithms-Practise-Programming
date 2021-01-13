// vector::size
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int> v;
  cout <<"0.size:"<< v.size() << '\n';
   // myints.push_back(myints.begin(),10,100);
    for (int i=0; i<10; i++)
        v.push_back(i);
    cout << "1. size: " << v.size() << '\n';
      v.insert(v.end(),10,100);

      for(int i=0;i<v.size();i++){
        cout<<' '<<v[i];
      }
      cout<<endl;
     cout << "2. size: " << v.size() << '\n';

     v.pop_back();
       cout<<"3.size: "<<v.size() << '\n';

  return 0;
}
