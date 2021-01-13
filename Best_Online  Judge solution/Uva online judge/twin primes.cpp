#include<bits/stdc++.h>
#include<vector>
#define max 20000000
using namespace std;
bool mark [max];
vector <int> prime;
void sieve ()
{
    memset(mark,true,sizeof (mark));
    mark[0]=mark [1] =false;
   prime.clear ();
     prime.push_back (2);
    for ( int i = 4; i <max; i += 2 ){
        mark [i] = false;
    }
    for ( int i = 3; i<=max; i+=2 ) {
            if ( mark [i]==true ){
           prime.push_back (i);
    }
        if(max/i>=i) {
            for ( int j = i * i; j <max; j += 2 * i )
                mark [j] = false;
                }
        }
}
int main ()
{
    sieve ();
    vector<int>twinPrime;
    for ( size_t i=1;i<prime.size ();i++) {
        if(prime[i]-prime[i-1]== 2)
            twinPrime.push_back(prime[i-1]);
    }
    int s;
    while(scanf("%d",&s)!=EOF){
        printf("(%d, %d)\n",twinPrime[s-1],twinPrime[s-1]+2);
    }
    return 0;
}
