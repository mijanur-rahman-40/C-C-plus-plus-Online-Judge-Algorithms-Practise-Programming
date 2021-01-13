// p pow q ar end a zero count

#include<bits/stdc++.h>
using namespace std;
int prime_factorize(int N, int x)
{
    int coun = 0;
    while(N % x == 0)
    {
        coun++;
        N = N / x;
    }
    return coun;
}
int main()
{
     int P,Q,Tst;

          while(scanf("%d%d",&P,&Q)==2){
          int x=prime_factorize(P,2);
          int y=prime_factorize(P,5);

          int ans2=Q*x;
          int ans5=Q*y;
          if(ans1>ans2){
           printf("Trailing zero are %d\n",ans2);
     }
     else{
          printf("Tailing zero are %d\n",ans5);
     }
     }
     return 0;
}


