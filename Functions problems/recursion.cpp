#include<bits/stdc++.h>
using namespace std;
int mystery(int a,int b)
{
     if(b==0)
          return 0;
     if(b%2==0)
          return mystery(a+a,b/2);
     return mystery(a+a,b/2)+a;
}
int main()
{
     int a,b;
     cin>>a>>b;
     cout<<mystery(a,b)<<endl;
}
