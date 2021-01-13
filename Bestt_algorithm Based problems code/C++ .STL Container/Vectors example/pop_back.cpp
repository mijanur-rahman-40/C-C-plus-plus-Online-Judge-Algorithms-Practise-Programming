#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int>v;
  int sum (0);
//     v.push_back (100);
//     v.push_back (200);
//      v.push_back (300);
    int num;
  cin>>num;
  while(num--){
    int n;
    cin>>n;
    v.push_back(n);
  }
       // while (!v.empty())
      int sz=v.size();
       for(int i=0; i<sz; i++)
     {
        sum+=v.back();

         v.pop_back();
         cout<<"sum is ="<<sum<<endl;
     }

            cout << "The elements of myvector add up to " << sum << '\n';

  return 0;
}
