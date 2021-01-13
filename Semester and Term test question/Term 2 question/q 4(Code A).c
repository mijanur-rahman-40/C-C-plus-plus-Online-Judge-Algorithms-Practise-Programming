#include<stdio.h>
int main()
{
    int i,x=0;
    for(i=0;i<100;i++){
        if(i%3==0)
            break;
        if(i%2==1)
            x+=i;
        else x--;

        printf("%d\n",x);
        continue;
    }
    printf("\ni=%d x=%d",i,x);

    return 0;
}
