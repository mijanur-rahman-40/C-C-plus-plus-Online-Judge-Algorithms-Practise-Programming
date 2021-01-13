/*
#include<bits/stdc++.h>
using namespace std;
int s[100],m,n;
int dp[100][100];
int coun(int s[],int m,int n)
{
    if(n==0)
         return 1;
    if(n<0)
         return 0;
    if(m<=0 && n>=1){
         return 0;
    }
    if( dp[n][m] != -1){
        return dp[n][m];
    }
    else{
     dp[n][m] = coun(s,m-1,n)+coun(s,m,n-s[m-1]);
     return dp[n][m];
    }
}
int main()
{
    int n,m;
    cin>>m>>n;
    for(int i=0; i<m; i++){
        cin>>s[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<"Minimum number of way: "<<coun(s,m,n);
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int coins,taka;
int CoinChange(int coin[],int pos,int sum)
{
   if(sum<0)return 0;
  if(pos == coins)
  {
    if(sum==0)return 1;
    else return 0;
  }
  else if(dp[pos][sum]!=-1)
    return dp[pos][sum];
  dp[pos][sum]=0;
    if(sum-(coin[pos])>=0)
    dp[pos][sum] +=CoinChange(coin,pos+1,sum-(coin[pos]));
}
int main()
{

    scanf("%d%d",&coins,&taka);
     int coin[coins+2];
    for(int i=0; i<coins; i++)
    {
        cin>>coin[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<"Minimum number of coin : "<<CoinChange(coin,0,taka)<<endl;
}
/*

#include<bits/stdc++.h>
using namespace std;
int srr[100];
int mat[100][100] = {0};
int main()
{
    int taka,num;
    cin>>num>>taka;
    for(int i=0; i<num; i++){
        cin>>srr[i];
    }
    for(int i=0; i<num; i++){
        mat[0][i] = 1;
    }
    int x,y;
    for(int i=1; i<=taka; i++){
        for(int j=0; j<num; j++){
            if(i - srr[j]>=0){
                x = mat[i - srr[j]][j];
            }
            else
                x = 0;
            if(j>= 1){
                y = mat[i][j-1];
            }
            else
                y = 0;
            mat[i][j] = x + y;
        }
    }
    cout<<"Minimum number of way: "<<mat[taka][num-1]<<endl;
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],coins,taka;
    scanf("%d%d",&coins,&taka);
    for(int i=1; i<=coins; i++){
    cin>>arr[i];
    }
    int mat[100][100];
   // memset(mat,0,sizeof(mat));

    for(int i=0; i<=taka; i++){
        mat[1][i] = 1;
    }

    for(int i=1; i<=coins; i++){
        mat[i][0] = 1;
    }

    for(int i=1; i<=coins; i++){
        for(int j=1; j<=taka; j++){
                if(j<arr[i]){
                    mat[i][j] = mat[i-1][j];
                }
                else
                    mat[i][j] = mat[i][j-arr[i]] + mat[i-1][j];
        }
    }
    cout<<"Minimum number of ways: "<<mat[coins][taka];
    return 0;
}

*/
//Most efficient dp


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coins,taka;
    while(cin>>coins>>taka){
    int coin[100];
    for(int i=0; i<coins; i++){
        cin>>coin[i];
    }
    int temp[taka+1];
    memset(temp,0,sizeof(temp));
    temp[0] = 1;
    for(int i=0; i<coins; i++){
        for(int j=1; j<=taka; j++){
                if(j>=coin[i]){
            temp[j] =temp[j] + temp[j-coin[i]];
           // cout<<"temp["<<j<<"]  = "<<temp[j]<<"  ";
        }
      }
     // cout<<endl;
    }
       cout<<"Number of ways: "<<temp[taka];
    }
       return 0;
}



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coin[] = {1,5,10,25,50};
	long long temp[30005];
     memset(temp,0,sizeof(temp));
    temp[0] = 1;
    for(int i=0; i<5; i++){
        for(int j=coin[i]; j<=30005; j++){
               // if(j>=coin[i]){
            temp[j] += temp[j-coin[i]];
      }
    }
    int taka;
    scanf("%d",&taka);
		if(temp[taka] == 1)
       printf("There are %lld ways to produce %d cents change.\n",temp[taka],taka);
       else
        printf("There is only 1 way to produce %d cents change.\n",taka);
       return 0;
}

*/

/*
#include<bits/stdc++.h>
using namespace std;

int numOfWaysRecursive(int coins[], int i, int amount){
    if(amount==0){
      return 1;
    }
    if(i < 0){
      return 0;
    }
    if(amount < coins[i]){
      return numOfWaysRecursive(coins, i-1, amount);
    }
    else{
      return numOfWaysRecursive(coins, i-1, amount) + numOfWaysRecursive(coins, i, amount-coins[i]);
    }
  }

int main()
{
    int coins[100],coin,amount;
    cin>>coin>>amount;
    for(int i=1; i<=coin; i++){
        cin>>coins[i];
    }
    cout<<"Number of ways : "<<numOfWaysRecursive(coins,coin,amount)<<endl;
}

*/
