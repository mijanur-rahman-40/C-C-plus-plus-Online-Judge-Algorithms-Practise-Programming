#include<stdio.h>
int main()
{
    int n,tast,i;
    long long  int ans;
   scanf("%d",&tast);
    while(tast--){
    scanf("%d",&n);
     ans=n*(n+1);
    for( i=1;i<=n;i*=2){

    ans-=2*i;
    }

    printf("%lld\n",ans);


    }
    return 0;
}

