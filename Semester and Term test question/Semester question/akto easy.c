#include<stdio.h>
int main()
{
   int i=0,x=0;
    for(i=1;i<100;i++){
        if(i%7==0)
            break;
        if(i%2==1)
        x+=i;
        else x--;
        printf("%d\n",x);
        continue;
    }
    printf("\n i=%d x=%d",i,x);
    return 0;
}
