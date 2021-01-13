#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >>str;
    int count1=0;
     long long coun=0;
    for(int i=4;i<str.length();++i)
    {
      if (str[i] == 'l')
        {
           if(str[i-4]=='m' && str[i-3]=='e' && str[i-2]=='t' && str[i-1]=='a')
            {
               coun+=count1;
            }
        }
        else if(str[i-4]=='h' && str[i-3]=='e' && str[i-2]=='a' && str[i-1] == 'v' && str[i]=='y')
        {
          ++count1;
        }
    }
    cout<<coun<<endl;
    return 0;
}

