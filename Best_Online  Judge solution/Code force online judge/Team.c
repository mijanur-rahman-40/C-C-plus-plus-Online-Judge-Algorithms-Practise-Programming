#include<stdio.h>
int main()
{
    int tast,sum;
    int a,b,c;
    int count=0;
    scanf("%d",&tast);
    while(tast--){

        scanf("%d%d%d",&a,&b,&c);
        sum=a+b+c;
        if(sum>=2){
            count++;
    }
    }
    printf("%d\n",count);
    return 0;

}
