
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll i,temp=1,a,b;
    cin>>a>>b;
    if(a==0){
        a=1;
    }
    if(b==0){
        b=1;
    }
    if(a==b){
        cout<< "1" <<endl;
    }
    else{
       if(b-a>=10){
        cout<< "0" <<endl;
        return 0;
       }
       else{
        for(i=a+1; i<=b; i++){
            temp=((temp*i)%10)%10;
        }
        cout<<temp<<endl;
       }
    }
    return 0;
}

