#include<iostream>
using namespace std;

int main()
{
    long long int n,k,mid;
   cin>>n>>k;
    mid=(n+1)/2;
    if(k<=mid)
        cout<<k*2-1<<endl;
    else
        cout<<(k-mid)*2<<endl;
    return 0;
}
