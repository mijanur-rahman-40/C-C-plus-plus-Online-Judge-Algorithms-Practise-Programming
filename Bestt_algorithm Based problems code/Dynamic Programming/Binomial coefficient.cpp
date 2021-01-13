#include<bits/stdc++.h>
using namespace std;
/*
int nCr(int n,int r){
    if (r==1) return n;
    if (n==r) return 1;
    return nCr(n-1, r) + nCr(n-1, r-1);
}
*/
int table[20][20];
int nCr(int n,int r){
    if (r==1) return n;
    if (n==r) return 1;
    if (table[n][r] != -1)
        return table[n][r];
    table[n][r] = nCr(n-1, r) + nCr(n-1, r-1);
    return table[n][r];
}
int main()
{
    int num,r;
    memset(table,-1,sizeof(table));
    cin>>num>>r;
    cout<<nCr(num,r);
}
