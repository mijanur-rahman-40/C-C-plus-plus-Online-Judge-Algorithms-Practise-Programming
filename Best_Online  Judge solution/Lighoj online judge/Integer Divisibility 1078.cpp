#include <bits/stdc++.h>
using namespace std;
int main()
{
   long int tst,i,bhajjo,num,rem;
   scanf("%ld",&tst);
    for(i=0;i<tst;i++){
    scanf("%ld",&num);
    scanf("%ld",&rem);
     long int count=1;
    bhajjo=rem;
   while(rem%num!=0)
    {
       rem = (rem*10+bhajjo)%num;
       count++;
    }
    printf("Case %ld: %ld\n",i+1,count);
   }
   return 0;
}
