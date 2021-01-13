#include <iostream>
using namespace std;

#define LL long long

int main()
{
    LL m, b, sum, ans;
    while(cin>>m>>b)
    {
        ans = 0;
        for (LL i = b; i >= 0; i--)
        {
            LL k = b*m - i*m;
            sum = k*(k + 1)*(i + 1) / 2 + i*(i + 1)*(k + 1) / 2;
            ans = max(ans, sum);
        }
    cout<<ans<<endl;
    }
    return 0;
}
