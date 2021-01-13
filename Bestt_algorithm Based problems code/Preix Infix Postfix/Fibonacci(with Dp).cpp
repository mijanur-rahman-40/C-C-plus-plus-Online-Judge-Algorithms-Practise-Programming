#include<bits/stdc++.h>
using namespace std;
int Dp[100];
int rec(int n){
     memset(Dp,-1,sizeof(Dp));
if(n<=1)
{
     return 1;
}
if(Dp[n]==-1){
     return Dp[n]=rec(n-1)+rec(n-2);
}
else
     return Dp[n];
   }
int main()
{
     int num;
     while(scanf("%d",&num) && num){
     printf("%d\n",rec(num));
     }
     return 0;
}
