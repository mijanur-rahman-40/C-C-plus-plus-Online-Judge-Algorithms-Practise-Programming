#include<bits/stdc++.h>
using namespace std;
int lo(int n)
{
     if(n==1)
          return 1;
     return lo(n-3)+1;
}
int main()
{
     int n;
     cin>>n;
     cout<<lo(n)<<endl;
}
