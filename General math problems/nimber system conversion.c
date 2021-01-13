
#include<stdio.h>
#include<math.h>
 int  nbase(int n)
{
    int remainder;
int finary = 0, i = 1;

    while(n != 0) {
        remainder = n%5;
        n = n/5;
       finary= finary + (remainder*i);
        i = i*10;
    }
    return finary;
}
int BinToDeci(int n)

{
    int decimal=0,i=0,remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimal += remainder*pow(5,i);
        ++i;
    }
    return decimal;
}

int main(){
    int d,a,c;
    scanf("%d",&d);
   a=nbase(d);
   c=BinToDeci(a);
   printf("%d %d",a,c);
    return 0;
}
