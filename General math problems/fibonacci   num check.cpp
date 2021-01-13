
#include <iostream>
#include <math.h>
using namespace std;
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
bool isFibonacci(int n)
{
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}
int main()
{
  for (int i = 1; i <= 100; i++){
     if(isFibonacci(i)){
     cout << i << " is a Fibonacci Number \n";
     }else
    cout << i << " is a not Fibonacci Number \n" ;
  }
  return 0;
}
*/
#include <iostream>
#include <math.h>
using namespace std;
bool fibo[100045];
void solve()
{
    fibo[0] = true;
    fibo[1] = true;
    int F = 0, S = 1, T ;
    while(F+S<=100001){
        T = F + S;
        fibo[T] = true;
        F = S;
        S = T;
    }
}
int main()
{
    solve();
  for (int i = 1; i <= 100; i++){
     if(fibo[i]){
     cout << i << " is a Fibonacci Number \n";
     }else
    cout << i << " is a not Fibonacci Number \n" ;
  }
  return 0;
}

