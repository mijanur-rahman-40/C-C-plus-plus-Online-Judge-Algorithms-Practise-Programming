#include<bits/stdc++.h>
using namespace std;
 //(1+2+3+⋯+n)mod11
int findSum(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
    sum %= 2;
  }
  return sum;
}
//(1 * 2 * 3 * ⋯ * n)mod11
int findFactorial(int n) {
  int factorial = 1;
  for (int i = 1; i <= n; i++) {
    factorial *= i;
    factorial %= 2;
  }
  return factorial;
}
int main()
{
  int num;
  while(scanf("%d",&num)==1){
     printf("when summation %d\n",findSum(num));
     printf("when multiplication %d",findFactorial(num));
     printf("\n");
  }
  return 0;
}
