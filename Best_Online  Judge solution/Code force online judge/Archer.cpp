
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  a,b,c,d;
    cin>>a>>b>>c>>d;
    double p,q;
    p=(double)a/(double)b;
     q=(1-(double)a/(double)b)*(1-(double)c/(double)d);
    cout<<p/(1-q)<<endl;

}
