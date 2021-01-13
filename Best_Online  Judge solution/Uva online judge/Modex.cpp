#include<bits/stdc++.h>
using namespace std;
 long bigmod(long x,long y,long n){
  if(y==0){
    return 1%n;
  }
  long long int mod=bigmod(x,y/2,n);
  mod=(mod*mod)%n;
   if(y%2==1){
    mod=(mod*x)%n;
  }
  return mod;
}
int main()
{
    long int  x,y,n,ans,tst;
    scanf("%d",&tst);
    while(tst--){
    scanf("%ld%ld%ld",&x,&y,&n);
         if(y<=0)
          break;
    ans=bigmod(x,y,n);
    printf("%ld\n",ans);
   }
    return 0;
}
