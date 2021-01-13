#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst,j=1,even;
    long num;
     scanf("%d",&tst);
     while(tst--){
          cin>>num;
          if(num%2!=0){
               printf("Case %d: Impossible\n",j++);
          }
          else{
          even=1;
          while(num%2==0){
                even=even*2;
                num=num/2;
          }
              printf("Case %d: %ld %d\n",j++,num,even);
     }
     }
          return 0;
     }

