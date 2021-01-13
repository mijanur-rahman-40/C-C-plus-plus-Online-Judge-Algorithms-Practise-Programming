/*
#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
bool isFibonacci(int num)
{
    return isPerfectSquare(5*num*num + 4) ||
           isPerfectSquare(5*num*num - 4);
}
int main()
{
    int num;
    cin>>num;
   for (int i=1;i<=num;i++){
    if( isFibonacci(i)==1)
    cout <<"O";
    else
    cout <<"o" ;
   }
  return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int dp[100];
map<int,int>arr;
int main()
{
    int num;
    cin>>num;
    dp[0]=1;
    dp[1]=1;
   arr[1]=1;
    for(int i=2; i<=20; i++){
        dp[i]=dp[i-1]+dp[i-2];
        arr[dp[i]]=1;
    }
    for(int i=1; i<=num; i++){
        if(arr[i]==1){
            printf("O");
        }
        else
            printf("o");
    }
    return 0;
}
