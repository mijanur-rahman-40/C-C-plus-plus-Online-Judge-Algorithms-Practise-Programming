#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;
int main()
{
    int tst;cin>>tst;
    while(tst--){
     long long sum=0,sum1,num,sum3,temp;
     scanf("%lld",&num);
//    for(int i=2;i<=num;i*=2){
//       sum+=i;
//       }
   for(int i=0;i<=num;i++){
    temp=pow(2,i);
    if(num>=temp){
        sum+=temp;
    }
    else
        break;
   }
        sum1=(num*(num+1))/2;
        sum3=sum1-sum;
       printf("%lld\n",sum3-sum);
    }
    return 0;
}
