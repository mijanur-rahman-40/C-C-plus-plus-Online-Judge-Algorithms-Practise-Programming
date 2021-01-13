#include<stdio.h>
int main()
{
   int a,b,n,t,gcd,lcm;
   scanf("%d%d",&a,&b);
   //if(a==0)gcd==a;
   while(b>0){
    n=a%b;
    a=b;
    b=n;
    //else if(b==0)gcd==b;
            //else{
                //while(b!=0){
                    //t=b;
                    //b=a%b;
                    //a=t;
                //}
                //gcd=a;
            }
            //lcm=(a*b)/a;
printf("the GCD is %d \n",a);
return 0;

}
