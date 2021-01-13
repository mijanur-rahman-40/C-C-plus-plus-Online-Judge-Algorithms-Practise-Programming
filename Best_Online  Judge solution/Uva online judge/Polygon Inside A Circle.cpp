#include<bits/stdc++.h>
using namespace std;
#define  pi 2*acos(0.0)
int main()

{
   double r,n;
   while(scanf("%lf %lf",&r,&n) == 2){
       printf("%0.3f\n",n*r*r*sin(2*pi/n)*0.5);
    }
}
