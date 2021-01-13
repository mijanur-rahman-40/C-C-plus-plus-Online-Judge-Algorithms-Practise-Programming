#include<bits/stdc++.h>
using namespace std;
const int inf=1000000000;
#define LL long long
int main()
{
    LL a,b;
    while(cin>>a>>b)
    {
        if(b==0) cout<<1<<endl;
        else
        {
            LL ans=1;
            LL c=a-b+1;
            for(LL i=a;i>=c;i--)
            {
                ans*=i;
                while(ans%10==0)
                    ans/=10;

                ans%=inf;

            }
            cout<<ans%10<<endl;
        }
    }
    return 0;
}
//clue
// dutar diffrene ar sate ak jud kore  ar man thelka N porjonjo gun kora neta hobe ,
//gunfal ka bag korte hobe je porjonto nesssase bibajjo hoi jokokn hobenna thakon oi manke 10 dara mod korlle oi mod ar man e hoobe ans.

//10 5 =4
