#include<bits/stdc++.h>
using namespace std;
int dec_to_bin(long long num)
{
     int mod,coun=0;
     while(num>0)
     {
          mod=num%2;
          if(mod==1)
          {
               coun++;
          }
          num=num/2;
     }
     return coun;
}
int main()
{
     long long int num;
     int tst,j=1;cin>>tst;
     while(tst--){
          cin>>num;
          if(dec_to_bin(num)%2==0)
          {
               printf("Case %d: even\n",j++);
          }
          else
               printf("Case %d: odd\n",j++);
     }
     return 0;
}
