
/*
#include<bits/stdc++.h>
using namespace std;
long int dp[1000];
int fibonacci(int n)
{

   if(n==0){
    return 0;
   }
   if(n==1){
    return 1;
   }
   if(dp[n]!=-1){
    return dp[n];
   }
   else
    return dp[n]=fibonacci(n-1)+fibonacci(n-2);

}
int main()
{
    int num;
    while(cin>>num){
    for(int i=0;i<=num;i++){
        dp[i]=-1;
    }
    cout<<fibonacci(num)<<endl;
    }
    return 0;
}

*/
/*
500
315178285
600
-849170400
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    while(scanf("%d",&num) == 1){;
    long int dp[1000];
    memset(dp,0,sizeof(dp));
    dp[0]=0;
    dp[1] = 1;
    for(int i= 2; i<=num ;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout<<dp[num]<<endl;
    }
    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;
#define maxx 100010
bool arr[maxx];
int main()
{
    arr[0]=true;
    arr[1]=true;
    int a=0,b=1,c;
    int num;
    scanf("%d",&num);
    while(a+b<=maxx)
    {
        c=a+b;
        arr[c]=true;
        a=b;
        b=c;
    }
    if(arr[num]== 1)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
