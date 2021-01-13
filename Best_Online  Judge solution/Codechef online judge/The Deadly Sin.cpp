#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--){
        long int a,b;
        cin>>a>>b;
       a = __gcd(a,b);
            cout<<a*2<<endl;
        }
}
