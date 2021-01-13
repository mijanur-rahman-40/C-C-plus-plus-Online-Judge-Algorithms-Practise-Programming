
//code a problem ase.

#include<iostream>
#include <vector>
using namespace std;

vector<int> getPrimes(int n) {
  vector<int> primes;
  for (int i = 2; i <= n; i++) {
    if (isPrime(i)) {
      primes.push_back(i);
    }
  }
  return primes;
}
int main()
{
    int a;
    cin>>a;
    cout<<getPrimes(a)<<endl;
    return 0;
}
