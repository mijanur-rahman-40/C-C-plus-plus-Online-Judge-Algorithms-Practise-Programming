
#include <bits/stdc++.h>
using namespace std;
int main() {
   double r1,r2,r3,x,y,z,t1,t2,t3,area,s,area1;
   int test,i=1;
  scanf("%d",&test);
    while(test--){
        scanf("%lf%lf%lf",&r1,&r2,&r3);
       x = r2 + r3;
       y = r1 + r3;
       z = r1 + r2;
      t1 = acos((y*y+z*z-x*x)/(2*y*z));
      t2 = acos((z*z+x*x-y*y)/(2*x*z));
      t3= acos((x*x+y*y-z*z)/(2*x*y));
      s = (x+y+z)/2;
       area = sqrt(s*(s-x)*(s-y)*(s-z));
       area1 = area - (0.5)*(r1*r1*t1+r2*r2*t2+r3*r3*t3);
         printf("Case %d: %.03lf\n",i++,area1);
}
return 0;
}
