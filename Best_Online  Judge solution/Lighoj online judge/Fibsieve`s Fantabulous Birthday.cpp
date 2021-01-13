#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int num,n,temp;
   int tst,j=1;
   cin>>tst;
   while(tst--){
          cin>>num;
   temp=ceil(sqrt(num));
   n=num-(temp-1)*(temp-1);
if(temp%2==0)
       {
           if(n>temp)
     printf("Case %d: %lld %lld\n",j++,temp,(1+temp*temp-num));
           else
           printf("Case %d: %lld %lld\n",j++,n,temp);
       }
       else
       {
          if(n>temp)
     printf("Case %d: %lld %lld\n",j++,(1+temp*temp-num),temp);
           else
            printf("Case %d: %lld %lld\n",j++,temp,n);
       }
   }
   return 0;
}
