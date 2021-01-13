
#include<bits/stdc++.h>
using namespace std;
int main()
{
     long int tst,j=1,num,num1,rev,sum;
     scanf("%d",&tst);
     while(tst--){
    scanf("%ld",&num);
    num1=num;
    sum=0;
    while(num>0){
    rev=num%10;
     sum=sum*10+rev;
     num=num/10;
    }
   if(sum==num1){
     printf("Case %d: Yes\n", j++);
   }
   else
    printf("Case %d: No\n", j++);
     }
    return 0;
}

