
#include<bits/stdc++.h>
using namespace std;
const int maxn=1000005;
bool flag[maxn];
void sieve()
{
    flag[0]=1;
    flag[1]=1;
    for(int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    for(int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
        if(maxn/i>=i){
            int add=i*2;
            for(int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}
}
int main()
{
    sieve();
    int n,flg=0,a,b,i;
    while(scanf("%d",&n)&&n)
    {
        for(i=2; i<n; i++)
        {

            if(!flag[i] && !flag[n-i])
            {
                a=i;
                b=n-i;
                flg=1;
            }
        }
          if(flg==1)
             printf("%d:\n%d+%d\n",n,min(a,b),max(a,b));
        else
        printf("%d:\nNO WAY!\n",n);
        flg=0;
    }
    return 0;
}
