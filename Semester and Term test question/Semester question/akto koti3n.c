#include<stdio.h>
int main()
{
    int a=10,b=4,c=17,d=8,i;
    a=a|(1<<4);
    if((d>>3)&1){
    for(i=0;i<=3;i++){
        printf("a=%d,c=%d\n",a,c);
        a=a^c;
        c=c^i;
    }
}
   if((d>>2)%4==0 || (a%3==0 && c%4!=3))
    printf("a|c =%d\n",a|c);
   printf("b th bit of %d\n",a&(1<<b));
   return 0;
}
