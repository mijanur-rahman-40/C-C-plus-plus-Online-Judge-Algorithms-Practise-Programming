
#include<bits/stdc++.h>
using namespace std;
int num;
int arr[1001];
int get_min_step(int n)
{
    int r;
    if(n == 1)
        return 0;
    if(arr[n]!= -1)
        return arr[n];
    r= 1+ get_min_step(n-1);
    if( n%2 ==0){
        r=min(r, 1 + get_min_step(n/2));
    }
    if( n%3 ==0){
        r=min(r, 1 + get_min_step(n/3));
    }
    arr[n] = r;
    return r;
}
int main()
{
    int num;
    while(scanf("%d",&num)==1){
        for(int i=0; i<num+3; i++){
            arr[i] = -1;
        }
        cout<<get_min_step(num)<<endl;
    }
    return 0;
}
/*

#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int get_min_step( int n )
{
   int dp[n+1];
   dp[1] = 0;    //trivial case
  for(int i = 2; i<=n ; i ++ ){
       dp[i] = 1 + dp[i-1];
       if(i%2==0)
          dp[i] = min( dp[i] , 1+ dp[i/2] );
       if(i%3==0)
          dp[i] = min( dp[i] , 1+ dp[i/3] );
}
    return dp[n];
}
int main()
{
    int num;
    while(scanf("%d",&num)==1){
        cout<<get_min_step(num)<<endl;
    }
    return 0;
}
*/
