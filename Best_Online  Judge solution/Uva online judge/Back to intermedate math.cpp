#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,j =1;
    cin>>tst;
    while(tst--){
        int  u,v,d;
        scanf("%d%d%d",&d,&v,&u);
        float t1,t2;
        t1 = (1.0*d/sqrt(u*u-v*v));
        t2 = (1.0*d/u);
        if(v>=u || t1 == t2){
        printf("Case %d: can't determine\n",j++);
        }
        else
       printf("Case %d: %0.3f\n",j++,fabs(t1-t2));
    }
}
