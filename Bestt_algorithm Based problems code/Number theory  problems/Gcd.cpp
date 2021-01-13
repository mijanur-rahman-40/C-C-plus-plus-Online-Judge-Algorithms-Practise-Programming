/*
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    int ans=1,d;
    for(int i=1;i<=min(a,b);i++){
       if (a % i == 0 && b % i == 0) {
      ans = i;
    }
  }
  return ans;
}
int main()
{
    int n,m;
    for(;;){
    scanf("%d",&n,&m);
    int c;
   c=gcd(n,m);
    printf("%d",c);
    }
    return 0;
}
*/



/*
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) { // assuming a >= b
  while (true) {
    int remainder = a % b;
    if (remainder == 0){
        return b;
    }
    a = b; // a takes the bigger side
    b = remainder; // b takes the smaller side
  }

}
int main()
{
    int n,m;
    scanf("%d",&n,&m);
    int c;
   c=gcd(n,m);
    printf("%d",c);

    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
  if(b == 0)
    return a;
  else
    return gcd(b, a % b);
}

/*
int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}
//int gcd = __gcd(a, b);
*/
int main()
{
    int n,m;
    scanf("%d",&n,&m);
    int c;
    c=gcd(n,m);
    printf("%d",c);

    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
int GCD( int a, int b )
{
int temp;
if( a < b ) swap( a, b );
while( a % b != 0 ) {
temp = a;
a = b;
b = temp % b;
}
return b;
}
int main()
{
    int n,m;
    scanf("%d",&n,&m);
    int c;
    c=GCD(n,m);
    printf("%d",c);

    return 0;
}

*/
/*
#include<bits/stdc++.h>
using namespace std;
int GCD( int a, int b )
{
if( b == 0 ) return a;
if( a < b )
     swap( a, b );
int r = a % b;
return GCD( b, r );
}
int main()
{
    int n,m;
    scanf("%d",&n,&m);
    int c;
    c=GCD(n,m);
    printf("%d",c);

    return 0;
}

*/
/*
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b)
{
    if (!a)
       return b;
    return gcd(b%a,a);
}
ll reduceB(ll a, char b[])
{
    ll mod = 0;
    for (int i=0; i<strlen(b); i++)
        mod = (mod*10 + b[i] - '0')%a;
    return mod;
}
ll gcdLarge(ll a,char b[])
{
    ll num = reduceB(a, b);
    return gcd(a, num);
}
int main()
{
    ll a = 1221;
    char b[] = "1234567891011121314151617181920212223242526272829";
    cout << gcdLarge(a, b);
    return 0;
}
*/
/*
#include < iostream >
using namespace std;
int d, x, y;
void extendedEuclid(int A, int B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

int main( ) {
extendedEuclid(16, 10);
cout << ”The GCD of 16 and 10 is ” << d << endl;
cout << ”Coefficient x and y are: ”<< x <<  “and  “ << y << endl;
return 0;
}
*/
