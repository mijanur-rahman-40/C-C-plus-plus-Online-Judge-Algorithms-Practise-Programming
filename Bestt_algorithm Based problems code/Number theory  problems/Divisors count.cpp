
#include<bits/stdc++.h>
using namespace std;
int countDivisors(int n){
int divisor=0;
    for(int i=1; i<=n; i++){
    if(n%i==0){
        divisor++;
    }
}
return divisor;
}
int main()
{
   int n;
   scanf("%d",&n);
   int a;
   a=countDivisors(n);
   printf("%d\n",a);
   return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int countDivisor(int n) {
  int divisor = 0;
  for (int i = 1; i * i <= n; i++) {
    if (i * i == n) {
      divisor += 1;
    }
    else if (n % i == 0) {
      divisor += 2;
    }
  }
  return divisor;
}
int main()
{
   int n;
   scanf("%d",&n);
  int a =countDivisor(n);
   printf("%d\n",a);
   return 0;
}
*/
