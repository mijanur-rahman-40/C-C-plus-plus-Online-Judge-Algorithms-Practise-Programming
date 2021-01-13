
#include<bits/stdc++.h>
using namespace std;
int dp[101][1001];
int coins,taka;
int CoinChange(int coin[],int Ncoin[],int pos,int sum)
{
  if(sum<0)
    return 0;
  if(pos== coins)
  {
    if(sum==0)
    return 1;
    else
        return 0;
  }
  else if(dp[pos][sum] != -1){
    return dp[pos][sum];
  }
  dp[pos][sum]=0;
  for(int i=1; i<=Ncoin[pos]; i++){
    if(sum-(coin[pos]*i)>=0)
    dp[pos][sum] =(dp[pos][sum]+CoinChange(coin,Ncoin,pos+1,sum-(coin[pos])*i))% 100000007;
  }
  return dp[pos][sum];
}
int main()
{
    int tst,j=1;
    scanf("%d",&tst);
    while(tst--){
    scanf("%d%d",&coins,&taka);
    int coin[coins+2];
    int Ncoin[coins+2];
    for(int i=0; i<coins; i++)
    {
        cin>>coin[i];
    }
     for(int i=0; i<coins; i++)
    {
        cin>>Ncoin[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<"Case "<<j++<<": "<<CoinChange(coin,Ncoin,0,taka)<<endl;
    }
}


#include<bits/stdc++.h>
using namespace std;
int coin[100],NumOfCoin[100],dp[100][5000],n;
int rec(int pos,int sum)
{
  if(sum<0)return 0;
  if(pos==n)
  {
    if(sum==0)return 1;
    else return 0;
  }
  else if(dp[pos][sum]!=-1)return dp[pos][sum];
  dp[pos][sum]=0;
  for(int i=0;i<=NumOfCoin[pos];i++)
  {
    if(sum-(coin[pos]*i)>=0)
    dp[pos][sum]=(dp[pos][sum]+rec(pos+1,sum-(coin[pos]*i)))% 100000007;
  }
  return dp[pos][sum];
}
int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    int k;
    cin>>n>>k;
    memset(dp,-1,sizeof dp);
    for(int j=0;j<n;j++)cin>>coin[j];
    for(int j=0;j<n;j++)cin>>NumOfCoin[j];
     printf("Case %d: %d\n",i,rec(0,k));
  }
  return 0;
}
