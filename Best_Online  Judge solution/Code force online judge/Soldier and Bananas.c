#include<stdio.h>
int main()
{
   long int a,b,c,sum=0;
   int i;
    scanf("%ld%ld%ld",&a,&b,&c);
    for(i=1;i<=c;i++){
        sum+=a*i;
    }
    if(sum>b){
        printf("%ld\n",(sum-b));
    }
    else {
        printf("0\n");
    }
    return 0;
}
