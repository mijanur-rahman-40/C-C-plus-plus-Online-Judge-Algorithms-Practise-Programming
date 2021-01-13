/*

#include<iostream>
using namespace std;
int modInverse(int a, int m)
{
    a = a%m;
    for (int x=1; x<m; x++)
       if ((a*x) % m == 1)
          return x;
}
int main()
{
    int a =345, m = 76408;
    cout << modInverse(a, m);
    return 0;
}
*/
#include <iostream>

using namespace std;

int main ()
{
  long long int a = 0, n = 0;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter n: ";
  cin >> n;

  for (long long int c = 1; c < n; c++) {
   long long int num = a*c - 1;
    if (num%n == 0) {
      cout << "The multiplicative inverse is " << c << "." << endl;
      break;
    }
  }
  return 0;
}

/*

#include<iostream>
using namespace std;
int gcdExtended(int a, int b, int *x, int *y);
void modInverse(int a, int m)
{
    int x, y;
    int g = gcdExtended(a, m, &x, &y);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else{
        int res = (x%m + m) % m;
        cout << "Modular multiplicative inverse is " << res;
    }
}
int gcdExtended(int a, int b, int *x, int *y)
{
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = gcdExtended(b%a, a, &x1, &y1);
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}

int main()
{
    int a = 3, m = 11;
    modInverse(a, m);
    return 0;
}
*/
/*
#include <stdio.h>
int modInverse(int a, int m)
{
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;

    if (m == 1)
      return 0;

    while (a > 1)
    {
        q = a / m;

        t = m;
        m = a % m, a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }
    if (x1 < 0)
       x1 += m0;

    return x1;
}
int main()
{
    int a = 3, m = 11;
    printf("Modular multiplicative inverse is %d\n",
          modInverse(a, m));
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int gcd(int a, int b);
int power(int x, unsigned int y, unsigned int m);
void modInverse(int a, int m)
{
    int g = gcd(a, m);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else
    {
        cout << "Modular multiplicative inverse is "
             << power(a, m-2, m);
    }
}
int power(int x, unsigned int y, unsigned int m)
{
    if (y == 0)
        return 1;
    int p = power(x, y/2, m) % m;
    p = (p * p) % m;

    return (y%2 == 0)? p : (x * p) % m;
}
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main()
{
    int a = 3, m = 11;
    modInverse(a, m);
    return 0;
}
*/
