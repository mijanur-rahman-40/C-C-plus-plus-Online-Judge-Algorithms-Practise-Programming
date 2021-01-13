#include<stdio.h>
int main()
{
    int i,x=0;
    for(i=0;i<100;i++){
        if(i%2==0)
            x+=i;
        else{
            x--;
            if(i%5==0)
                break;
        }
        printf("%d\n",x);
    }
    printf("\ni=%d x=%d",i,x);
    return 0;

}
