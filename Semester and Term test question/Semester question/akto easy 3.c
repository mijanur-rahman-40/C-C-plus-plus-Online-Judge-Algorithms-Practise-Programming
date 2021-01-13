#include<stdio.h>
int main()
{
    int i=1,j=2,a=5,b=6,c=14;
    a=(a|b)<<3;
    if(c>> 3 & 1){
        printf("i=%d a=%d c=%d\n",i,a,c);
    a=a^c;
    c=c^i;
    i=j^i;
}
  if ((((b>>2)& (a|c)) %5) >0){
    printf("ii=%d jj=%d bb=%d\n",i,j,b);
  }
  printf("b-th bit of a=%d\n",a&(1<<b));
  return 0;
}
