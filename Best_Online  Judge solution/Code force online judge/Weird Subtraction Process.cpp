
#include<bits/stdc++.h>
using namespace std;
long long int a,b;
int main()
{

    cin>>a>>b;
     for(int i=0; ; i++){
            if(a==0 || b==0){
                break;
            }
       if(a>=2*b){
        a%=2*b;
       }
       else if(b>=2*a){
        b%=2*a;
      }
      else
        break;
      }
    cout<<a<<" "<<b<<endl;
    return 0;
}
