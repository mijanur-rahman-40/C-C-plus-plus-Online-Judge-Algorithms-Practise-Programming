#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x1,y1,x2,y2,x3,y3;
    int k = 1;
    while(scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3) == 6){
       float a1,b1,a2,b2,m1,m2,x,y,r,g,f,c;

       a1 = (x1+x2)/2;
       b1 = (y1+y2)/2;
       a2 = (x2+x3)/2;
       b2 = (y2+y3)/2;
       //cout<<a1<<b1<<a2<<b2;

       m1=(y2-y1)/(x2-x1);
       m2=(y3-y2)/(x3-x2);
       //cout<<m1<<" "<<m2;

        m1 = (-1)/m1;
        m2 = (-1)/m2;

       x = ((m1*a1-b1)-(m2*a2-b2))/(m1-m2);
       y = (((-1)*m1*(m2*a2-b2))-((-1)*m2*(m1*a1-b1)))/(m1-m2);
       g = 2*x;
       f = 2*y;

       //cout<<x<<" "<<y;
       r=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
       c=x*x+y*y-r*r;
       char ch1,ch2,ch3;
       ch1 = '-';
       ch2 = '-';
       ch3 = '+';

       if( x<0 ){
        ch1 = '+';
        g = (-1)*g;  x = (-1)*x;
       }

       if( y<0 ){
        ch2 = '+';
        f = (-1)*f;  y = ( -1)*y;
       }

       if( c<0 ){
        ch3 = '-';
        c = (-1)*c;
       }
      /*
       if(k!=1){
        cout<<endl;
    }
    */
printf("(x %c %0.3f)^2 + (y %c %0.3f)^2 = %0.3f^2\n",ch1,x,ch2,y,r);
printf("x^2 + y^2 %c %0.3fx %c %0.3fy %c %0.3f = 0\n",ch1,g,ch2,f,ch3,c);
  //k++;
  cout<<endl;
    }
    return 0;
}

/*
Sample Input
7.0 -5.0 -1.0 1.0 0.0 -6.0
1.0 7.0 8.0 6.0 7.0 -2.0
Sample Output
(x - 3.000)^2 + (y + 2.000)^2 = 5.000^2
x^2 + y^2 - 6.000x + 4.000y - 12.000 = 0

(x - 3.921)^2 + (y - 2.447)^2 = 5.409^2
x^2 + y^2 - 7.842x - 4.895y - 7.895 = 0
*/
