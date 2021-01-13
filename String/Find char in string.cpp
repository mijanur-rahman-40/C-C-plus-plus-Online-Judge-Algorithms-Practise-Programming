#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s = "abc*ab";
    std::string s2(s.begin(), std::find(s.begin(), s.end(), 'c'));
    std::cout << s2;
    return 0;
}
