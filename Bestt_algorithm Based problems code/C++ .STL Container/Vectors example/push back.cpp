
// vector::push_back
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  vector<int>vec;
  int num;

  cout << "Please enter some integers (enter 0 to end):\n";

 do{
cin >> num;
        vec.push_back (num);
} while (num);
// while(num){
//cin >> num;
//        vec.push_back (num);
// }
  cout << "myvector stores " << int(vec.size()) << " numbers.\n";

  return 0;
}
