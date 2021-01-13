#include<iostream>
#include<map>
#include<vector>
#define SZ 1000000000009
#define ll long long

using namespace std;

map<ll,ll>flag;
vector<ll>prime;
void sieve()
{
    ll i, j, add;
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
    for(ll i=1;i<SZ;++i)
    {
        if(flag[i]==0)
            prime.push_back(i);
    }
}
int main()
{
    return 0;
}
