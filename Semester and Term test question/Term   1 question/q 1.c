#include<stdio.h>
int main()
{
    int i,j,a=2;
    for(i=0;i<=15;i+=3)
    for(j=i+1;j<=17;j+=2){
            a+=j-i;
    if(a%4==0)
        continue;
    printf("i=%d j=%d a=%d\n",i,j,a);
    if(a%9==0)
        break;

    }
    return 0;

}
