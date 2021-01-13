#include<bits/stdc++.h>
using namespace std;
const int maxn=10000;
bool flag[maxn];
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
int main()
{
    sieve();
    int m,n;int c;
    scanf("%d%d",&m,&n);
    for(int i=m;i<n;i++)
        {
            if(!flag[i] && !flag[i+1])
            {

           int  a=flag[i+1]-flag[i];
           int b=flag[i+2]-flag[i+1];

          c=min(a,b);
          a=b;
          b=c;
            }
        }
        printf("%d",c);
return 0;
    }

