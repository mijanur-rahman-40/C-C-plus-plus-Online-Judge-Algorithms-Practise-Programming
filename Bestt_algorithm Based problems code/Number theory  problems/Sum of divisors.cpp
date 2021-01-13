/*
#include<bits/stdc++.h>
using namespace std;

int SOD( int n ) {
    int sqrtn=sqrt ( n );
    int res = 0;
    for ( int i=1;i<sqrtn; i++ ) {
        if ( n % i == 0 ) {
            res+= i; //"i" is a divisor
            res+= n / i; //"n/i" is also a divisor
        }
    }
    if ( n%sqrtn== 0 ) {
        if(sqrtn * sqrtn == n ) res += sqrtn; //Perfect Square.
        else {
            res+= sqrtn; //Two different divisor
            res+= n/sqrtn;
        }
    }
    return res;
}
int main()

{
    int n;
    scanf("%d",&n);
    printf("%d\n",SOD(n));
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
const int maxn=10000;
bool flag[maxn];
vector<int >prime;
void sieve()
{
    flag[1]=1;
    prime.push_back(2);
    for(int i=4; i<maxn; i+=2){
        flag[i]=1;
    }
    for(int i=3;i<=maxn; i+=2){
        if(flag[i]==0){
            prime.push_back(i);
        }
        if(maxn/i>=i){
            int add=i*2;
            for(int j=i*i; j<=maxn; j+=add){
                flag[j]=1;
            }
        }
    }
}
int Divsum( int n ) {
    int res = 1;
    int sqrtn = sqrt ( n );
    for ( int i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        if ( n % prime[i] == 0 ) {
            int tempSum = 1; //Contains value of (p^0+p^1+...p^a)
            int p = 1;
            while(n% prime[i] == 0) {
                n /= prime[i];
                p *= prime[i];
                tempSum += p;
            }
            sqrtn = sqrt ( n );
            res *= tempSum;
        }
    }
    if ( n != 1 ) {
        res *= ( n + 1 ); //for prime number and if n=2,3......
    }
    return res;
}
int main()

{
    sieve();
    int n;
    while(scanf("%d",&n) && n){
    printf("%d\n",Divsum(n));
    }
    return 0;
}
