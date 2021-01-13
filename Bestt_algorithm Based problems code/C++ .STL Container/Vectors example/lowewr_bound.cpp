#include <iostream>
#include <algorithm>
#include<iterator>
#include <vector>
using namespace std;
int main()
{
   vector<int> data = { 1, 1, 2, 3, 3, 3, 3, 4, 4, 4, 5, 5, 6 };

    auto lower = lower_bound(data.begin(), data.end(), 4);
    auto upper = upper_bound(data.begin(), data.end(), 4);
   copy(lower, upper,ostream_iterator<int>(cout, " "));
}
