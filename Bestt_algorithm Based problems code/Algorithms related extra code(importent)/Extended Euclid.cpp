#include <bits/stdc++.h>

using namespace std;

typedef long long  ll;

ll bigmod(ll a,ll b,ll m){
    if(b == 0)
        return 1%m;
    ll x = bigmod(a,b/2,m);
    x = (x * x) % m;
    if(b % 2 == 1)
        x = (x * a) % m;
    return x;
}

ll extGcd(ll a, ll b, ll& x, ll& y){
    if (b == 0){
        x = 1;
        y = 0;
        return a;
    } else{
        ll g = extGcd(b, a % b, y, x);
        y -= a / b * x;
        return g;
    }
}

void change(ll& old, ll &now, ll q){
    ll t = now;
    now = old-q*now;
    old = t;
}

void extGCD(ll a, ll b){ // a > b
    ll x = 0, y = 1;
    ll x_old = 1, y_old = 0;
    ll rem = b, rem_old = a;
    while(rem  != 0){
        ll quotient = rem_old / rem;
        change(rem_old, rem, quotient);
        change(x_old, x, quotient);
        change(y_old, y, quotient);
        printf("rem: %lld\tx: %lld\ty: %lld\n",rem,x,y);
    }
   // printf("rem: %lld\tx: %lld\ty: %lld\n",rem,x,y);
}

ll modInv(ll a, ll m){
    ll x, y;
    extGcd(a, m, x, y);
    x %= m;
    while (x < 0){x += m;}
    return x;
}

int main(){
    ll a, b;
    while(cin>>a>>b){
        //if(a < b) swap(a,b);
        ll x, y;
        //extGCD(a,b);
        ll g = extGcd(a,b,x,y);
        cout<<"GCD: "<<g<<" x: "<<x<<" y: "<<y<<endl;
    }
    return 0;
}

