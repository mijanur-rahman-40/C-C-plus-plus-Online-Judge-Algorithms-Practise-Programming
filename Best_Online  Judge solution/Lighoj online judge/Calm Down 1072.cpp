#include<bits/stdc++.h>
using namespace std;
#define PI acos(0.0)*2
int main()
{
    int tst;
    cin>>tst;float R,n,d,r;int j=1;
     while(tst--){
        cin>>R>>n;
        d=sin(PI/n);
        r=(R*d)/(1+d);
        if(r!=1)
           printf("Case %d: %.10f\n",j++,r);
        else
           printf("Case %d: %.0f\n",j++,r);
}
    return 0;
}



#include <stdio.h>
#include <math.h>
#define PI acos(0.0)*2
int main()
{
    int x,y,z;
    double a,b,c,d,f,g,h;
    double e;
    scanf("%d", &x);
    for(y=1; y<=x; y++){
        scanf("%lf%lf", &a, &b);
        c =(PI/b);
        d =sin(c);
        e =(a*d)/(1+d);
        z =(int) e;
        h =(e*1.0)/z;
        if(h!=1)
           printf("Case %d: %.10lf\n",y, e);
        else
           printf("Case %d: %.0lf\n",y, e);
    }
    return 0;
}
