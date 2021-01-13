#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    int temp = 3;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if(num == temp){
               cout << "NO";
        return 0;
        }
        if(temp == 3 && num == 1)
          {
               temp = 2;
        continue ;
        }
        if(temp == 3 && num == 2)
          {
               temp = 1;
        continue ;
        }
        if(temp == 2 && num == 1)
          {
               temp = 3;
        continue ;
        }
        if(temp == 2 && num == 3)
          {
               temp = 1;
        continue ;
        }
        if(temp == 1 && num == 3)
          {
               temp = 2;
        continue ;
        }
        if(temp == 1 && num == 2)
          {
               temp = 3;
        continue ;
        }

    }
    cout << "YES";
    return 0;
}
