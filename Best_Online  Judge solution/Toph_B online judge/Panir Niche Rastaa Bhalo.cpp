#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    scanf("%d",&tst);
    while(tst--){
        float h,s;
        scanf("%f%f",&h,&s);
        float ans;
        ans=s*s-h*h;
        //cout<<setprecision(11)<<(1.0*ans/(double)h)*.5<<endl;
        printf("%.10f\n",(ans/h)*.5);

    }
}
