/*
int dr [] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dc [] = {0, 1, 1, 1, 0, -1, -1, -1};

using namespace std;

LL memo [500 + 5] [500 + 5];

void reset ()
{
    for ( int i = 0; i < 505; i++ )
        for ( int j = 0; j < 505; j++ ) memo [i] [j] = -1;
}

LL dp (int prev, int remain)
{
    if ( remain == 0 ) return 1;
    if ( remain <= prev ) return 0;

    if ( memo [prev] [remain] != -1 ) return memo [prev] [remain];

    LL ret = 0;

    for ( int i = prev + 1; i <= remain; i++ ) ret += dp (i, remain - i);

    return memo [prev] [remain] = ret;
}

int main ()
{
    int n;

    while ( scanf ("%d", &n) != EOF ) {
        reset ();
        printf ("%lld\n", dp (0, n) - 1);
    }

    return 0;
}


*/

#include<bits/stdc++.h>
using namespace std;
long long dp[505][505];
long long is_Staircase(int i,int j)
{

    if(i == 0) return 1;
    if(j == 0) return 0;
    long long &ans = dp[i][j];
    if(ans == -1){
        ans = (i>=j?is_Staircase(i-j,j-1): 0)+  is_Staircase(i,j-1);
    }
    return ans;
}
int main()
{
    int numberOfBricks;
    cin>>numberOfBricks;
    memset(dp,-1,sizeof(dp));
    cout<<is_Staircase(numberOfBricks,numberOfBricks-1)<<endl;

}





















