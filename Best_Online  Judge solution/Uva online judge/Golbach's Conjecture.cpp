
#include<bits/stdc++.h>
using namespace std;
const  int maxn=1000000;
bool flag[maxn]={0};
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
       int num,i,flag1=0;
       while(scanf("%d",&num) && num){
        for(i=3;i<=num/2;i++)
        {
            if(!flag[i] && !flag[num-i])
            {
                flag1=1;
                break;
            }
        }
        if(flag1!=0)
            printf("%d = %d + %d\n",num,i,num-i);
        else
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}
