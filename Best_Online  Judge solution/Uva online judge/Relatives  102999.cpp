#include<bits/stdc++.h>
using namespace std;
int Euolar(int num) {
  int ans=num;
  for (int i=2; i*i<=num; i++) {
    if (num% i == 0) {
      while (num%i == 0) {
        num/=i;
      }
      ans-=ans/i;
    }
}
     if (num>1)
    ans-=ans/num;
   return ans;
}

int main()
{
   int num;
    while(scanf("%d",&num)&& num){
          if(num==1){
               printf("0\n");
          }
          else
            printf("%d\n",Euolar(num));
}
return 0;
}
