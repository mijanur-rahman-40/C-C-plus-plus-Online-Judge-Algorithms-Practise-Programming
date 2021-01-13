#include<stdio.h>
int main()
{
   long  int a,b,c;
    scanf("%ld%ld%ld",&a,&b,&c);

    if((2*a+2*b)<=(a+b+c)){
        printf("%ld\n",(2*a+2*b));
    }
   else if((2*a+2*c)<=(a+b+c)){
               printf("%ld\n",(2*a+2*c));
    }
           else  if((2*b+2*c)<=(a+b+c)){
                    printf("%ld\n",(2*b+2*c));
             }
    else{
        printf("%ld\n",(a+b+c));
    }
    return 0;


}
