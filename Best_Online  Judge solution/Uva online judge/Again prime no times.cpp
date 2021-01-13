
#include<bits/stdc++.h>
using namespace std;
const int maxn=100000;
bool flag[maxn];
int arr[maxn];
vector<int >prime;
void sieve()
{
    flag[1]=1;
    prime.push_back(2);
    for(int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    for(int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
            prime.push_back(i);
        }
        if(maxn/i>=i){
            int add=i*2;
            for(int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}
void fact_factors(int num,int p)
{
    int sum=0;
    while(num > 0)
    {
        sum+=(num/p);
        num/=p;
    }
    arr[p] =sum;
}
void solution(int base)
{
    int i, cont=0, ans=50000;
    for(i=0;i<prime.size(); i++)
    {
        if(base% prime[i]==0)
        {
            cont=0;
            while(base%prime[i]==0)
            {
                cont=cont+1;
                base/=prime[i];
            }
            ans =min(ans,arr[prime[i]]/cont);
        }
    }
    if(base> 1)
    {
        ans = min(ans, arr[base]);
    }
    if(ans==0 or ans==50000)
    {
        printf("Impossible to divide\n");
    }
    else
    {
        printf("%d\n",ans);
    }
}
int main()
{
    sieve();
    int tst,cas=0;
    scanf("%d",&tst);
    while(tst--)
    {
        memset(arr,0,sizeof(arr));
        int base,num;
        scanf("%d%d",&base,&num);
        printf("Case %d:\n",++cas);
        if(base==1 or num==1)
        {
            printf("Impossible to divide\n");
            continue;
        }
        for(int i=0; prime[i]<=num; i++)
        {
            fact_factors(num, prime[i]);
        }
        solution(base);
    }
}
