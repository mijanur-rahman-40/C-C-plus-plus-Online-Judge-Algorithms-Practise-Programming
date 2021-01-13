#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int x,y,len,sum;
    scanf("%lld%lld%lld",&x,&y,&len);
     sum=abs(x)+abs(y);
     if((len-abs(sum))%2==0  && len>=abs(sum)){
        cout<<"YES"<<endl;
             }
             else{
                cout<<"NO"<<endl;
             }

}
