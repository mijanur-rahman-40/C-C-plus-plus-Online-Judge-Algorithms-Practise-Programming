
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2;
    scanf("%d%d",&a1,&a2);
    int ans = 0;
    while(a1>0 && a2>0)
    {
        if( a1<=1 &&  a2<=1){
            break;
        }
        if( a1< a2){
            a1 = a1 + 1;
            a2 = a2 - 2;
        }
        else
        {
            a1 = a1 - 2;
            a2 = a2 + 1;
        }
        ans++;
    }
    cout<<ans<<endl;
}


