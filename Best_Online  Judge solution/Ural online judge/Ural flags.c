#include<stdio.h>
 int main() {
      int N,i;long long dp[46][3]={0};
      dp[1][0]=dp[1][2]=1;
      scanf("%d", &N);
      for( i=2; i<=N; i++)
          dp[i][0]=dp[i-2][2]+dp[i-1][2],
          dp[i][1]=dp[i-1][0]+dp[i-1][2],
        dp[i][2]=dp[i-2][0]+dp[i-1][0];
      printf("%lld\n",dp[N][0]+dp[N][2]);
     return 0;
 }
