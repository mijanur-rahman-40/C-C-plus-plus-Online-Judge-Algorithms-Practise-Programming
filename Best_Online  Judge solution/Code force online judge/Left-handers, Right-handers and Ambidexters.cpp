#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a;
    scanf("%d%d%d",&l,&r,&a);
    if(l == 0 && r == 0 ){
        if(a%2==0){
            cout<<a<<endl;
        }
        else
            cout<<a-1<<endl;
    }
    else if( l + a <=r ){
        cout<<(l+a)*2<<endl;
    }
    else if( r + a <=l ){
                cout<<(r+a)*2<<endl;
            }
            else{
            int x = (l + r +a)/2;
            cout<< x*2 <<endl;
            }
    return 0;
}








