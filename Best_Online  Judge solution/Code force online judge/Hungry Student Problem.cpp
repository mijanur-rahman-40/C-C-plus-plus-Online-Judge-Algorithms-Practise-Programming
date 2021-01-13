#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst;cin>>tst;
     while(tst--){
          int num;cin>>num;
          while(num>=0 && num%3){
               num-=7;
          }
          if(num>=0)
               printf("YES\n");
          else
               printf("NO\n");
     }
     return 0;
}
