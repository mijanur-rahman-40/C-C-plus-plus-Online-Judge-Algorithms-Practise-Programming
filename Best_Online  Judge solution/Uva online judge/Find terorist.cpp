
#include<bits/stdc++.h>
using namespace std;
const int maxn=10000;
bool flag[maxn];
void sieve()
{
    flag[1]=1;
    flag[2]=0;
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
    int t,a,b,i,j;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d",&a,&b);
    int flag1=1;
    int k=0;
    for(i=a;i<=b;i++){
            int coun=0;
        for(j=1;j<=i;j++){
            if(i%j==0)
            coun++;
        }
    if(flag[coun]==0){
            k++;
          flag1=0;
        if(k==1)
        printf("%d",i);
        else
     printf(" %d",i);
    }
    }
    if(flag1==1)
    printf("-1\n");
    else
    printf("\n");
    }
}

