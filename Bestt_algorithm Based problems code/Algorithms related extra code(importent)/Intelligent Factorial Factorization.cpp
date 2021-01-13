#include<bits/stdc++.h>
using namespace std;
#define SZ 1000005
#define ll long long
bool flag[SZ];
vector<ll>prime;
void sieve()
{
    int i, j, add;
    flag[0] = flag[1] = 1;
    prime.push_back(2);
    for(i = 4; i < SZ; i+=2)
    {
        flag[i] = 1;
    }
    for(i = 3; i < SZ; i+=2)
    {

        if(flag[i]==0)
        {
            prime.push_back(i);
            if(SZ/i >= i)
            {
                add = i * 2;
                for(j = i * i; j < SZ; j += add)
                    flag[j] = 1;
            }
        }
    }
}
int main()
{
    for(int i=0;i<SZ;++i)
    {
        cout<<prime[i]<<" ";
    }
    return 0;
}
