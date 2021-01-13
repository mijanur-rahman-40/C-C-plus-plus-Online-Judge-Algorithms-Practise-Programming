#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tst,j=1;cin>>tst;
     while(tst--)
          {
               int  Ax, Ay, Bx, By, Cx, Cy,Dx,Dy;
               long area;
               cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;
                area = (Ax*(By-Cy)+Bx*(Cy-Ay)+Cx*(Ay-By));
                Dx=Ax+Cx-Bx;
                Dy=Ay+Cy-By;
                cout<<"Case "<<j++<<": "<<Dx<<" "<<Dy<<" "<<abs(area)<<endl;
          }
          return 0;
     }
