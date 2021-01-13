
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int stop;
    cin>>stop;
    int exist,enter;int mx=0,sum=0;
    for(int i=0;i<stop;i++){
           cin>>exist>>enter;
        sum=enter-exist+sum;
         mx=max(mx,sum);
    }
    cout<<mx<<endl;
}
