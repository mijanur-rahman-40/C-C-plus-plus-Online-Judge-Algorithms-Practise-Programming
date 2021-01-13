#include<stdio.h>
int gcd(int a,int b)
{
    int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
  int main()
  {
      int a,b,t;
      scanf("%d",&t);
      while(t--){
      scanf("%d%d",&a,&b);
      int c;
      c=gcd(a,b);
      printf("LCM = %d\n",(a*b)/c);
      }
      return 0;
  }
// OR UNDER CODE.
//#include<stdio.h>
//  int main()
//  {
//    int temp,a,b,t,e,f,s;
//    scanf("%d",&t);
//    while(t--){
//    scanf("%d%d",&a,&b);
//    f=a;
//    s=b;
//    while(b!=0){
//        temp=b;
//        b=a%b;
//        a=temp;
//         e=a;
//    }
//      int d;
//    d=(f*s)/e;  //e ar jaigai sodo a nilao hobe.
//      printf("LCM = %d\n",d);
//    }
//      return 0;
//  }

