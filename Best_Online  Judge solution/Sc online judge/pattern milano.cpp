#include <bits/stdc++.h>
using namespace std;
 bool ans;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    vector<string> b(m);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin >> b[i];
    }
    for (int i=0;i<n-m+1;i++)
    {
        for (int j=0;j<n-m+1;j++)
        {
           ans = true;
            for (int x=0;x<m;x++)
            {
                for (int y=0;y<m;y++)
                {
                    if (a[y+j][x+i] != b[y][x])
                    {
                        ans = false;
                        break;
                    }
                }
                if (!ans) break;
            }
            if (ans)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}
