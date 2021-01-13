
#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
string str;
int len;
int is_palindrome(int i,int j)
{
   if(i >= len || i>j || j<0){
    return 0;
   }
   if(dp[i][j] != -1){
    return dp[i][j];
   }
   if(str[i] == str[j]){
    dp[i][j] = is_palindrome(i+1,j-1);
   }
   else{
     dp[i][j] = min(1 + is_palindrome(i+1,j),1 + is_palindrome(i,j-1));
   }
   return dp[i][j];
}
int main()
{
  int tst,k = 1;
  cin>>tst;
  while(tst--)
  {
      cin>>str;
      memset(dp,-1,sizeof(dp));
      len = str.size();
      cout<<"Case "<<k++<<": "<<is_palindrome(0,len-1)<<endl;
      str.clear();
  }
}
