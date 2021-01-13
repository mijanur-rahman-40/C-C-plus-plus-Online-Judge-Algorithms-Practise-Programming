#include <bits/stdc++.h>

int SIZ = 1000000000;

int flag[(SIZ>>3)+1];


int check(int &i)
{
    int d = i/32;
    int m = i%32;
    if(flag[d] & (1<<m)) return 1;
    return 0;
}

void sett(int &i)
{
    int d = i/32;
    int m = i%32;
    flag[d] |= (1<<m);

}
void sieve()
{
    int i,j,add;
    prime[c++]=2;
    for(i=4; i<MAX; i+=2) sett(i);
    for(i=3; i<MAX; i+=2)
    {
        if(check(i))
        {
            prime[c++]=i;
            if(i*i < MAX)
            {
                for(j=i*i; j<MAX; j+=2*i) sett(j);
            }
        }
    }
}

int main()
{
    int test;
    read();
    return 0;
}













