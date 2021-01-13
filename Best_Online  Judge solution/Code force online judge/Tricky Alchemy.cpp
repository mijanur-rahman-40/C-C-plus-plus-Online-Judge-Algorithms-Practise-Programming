#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int main()
{
    ll A,B;
    ll y,g,b;
     scanf("%lld%lld%lld%lld%lld",&A,&B,&y,&g,&b);
     ll sum1,sum2,add,f;
     ll a=0,c=0;
     add=(A-y*2);
     sum1=(add-g);
     if(sum1<=0){
        a=abs(sum1);
     }
     f=(B-g);
     sum2=(f-b*3);
     if(sum2<=0){
       c=abs(sum2);
     }
     ll sum=a+c;
//     if(A==0 && B==0){
//          printf("%lld\n",y*2+g*2+b*3);
//          return 0;
//     }
//     else
     cout<<sum<<endl;
     return 0;
}
