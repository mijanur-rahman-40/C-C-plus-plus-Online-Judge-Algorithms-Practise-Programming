#include<cstdio>
const int maxn=10000;
int prime[maxn],num[maxn*2],result[maxn*2];
void work()
{
    int a=0,b=2;
    for(int i=2;i<maxn;++i)
    {
        if(prime[i]==0)
        {
            if(i>2)
            {
                a=b;b=i;
                num[a+b+1]=1;
            }
            for(int j=2*i;j<maxn;j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<maxn;++i)
    {
        if(prime[i]==0 && num[i]==1)
        {
            result[i]=1;
        }
        result[i]+=result[i-1];
    }
}
int main()
{
    work();
    int n,k;
    while(~scanf("%d%d",&n,&k))
    {
        printf("%s\n",result[n]>=k?"YES":"NO");
    }
    return 0;
}


