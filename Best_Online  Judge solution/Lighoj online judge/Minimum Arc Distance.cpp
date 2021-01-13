/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst,j=1;
     cin>>tst;
     while(tst--){
          int  Ox,Oy,Ax,Ay,Bx,By;
          float angle,ans;
          cin>>Ox>>Oy>>Ax>>Ay>>Bx>>By;
     float a=sqrt(pow((Ax-Bx),2)+pow((Ay-By),2));
     float r=sqrt(pow((Ox-Ax),2)+pow((Oy-By),2));
     angle=acos((2*r*r-a*a)/2*r*r);
     ans=r*angle;
     printf("Case %d: %f\n",j++,ans);
     }
     return 0;
}
*/
#include<stdio.h>
#include<math.h>

int main()
{
    int t, s;
    scanf("%d", &t);
    for(s=1;s<=t;s++)
    {
        double ox,oy,ax,ay,bx,by,r,c,A,res;
     scanf("%lf%lf%lf%lf%lf%lf",&ox,&oy,&ax,&ay,&bx,&by);
     c=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
     r=sqrt((ox-ax)*(ox-ax)+(oy-ay)*(oy-ay));
     A=acos((r*r+r*r-c*c)/(2*r*r));
     res=A*r;
     printf("Case %d: %.9lf\n",s,res);
    }
    return 0;
}
