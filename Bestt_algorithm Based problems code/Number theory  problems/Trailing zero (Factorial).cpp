#include<bits/stdc++.h>
using namespace std;
int prime_factorize(int N, int x)
{
    int m;
     m=N/x;
    return m;
}
int main()
{
     int P;

          while(scanf("%d",&P)==1){
          int x=P/2;
          int y=prime_factorize(P,25);
          int ans2=x;
          int ans5=y+P/5;
          int ans=min(ans2,ans5);
           printf("Trailing zero are %d\n",ans);

     }
     return 0;
}


