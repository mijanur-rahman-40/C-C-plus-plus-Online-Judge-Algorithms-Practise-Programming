#include<stdio.h>
int main()
{
    int i,x=0;
    for(i=1;i<100;++i)
    {
        if(i%2==0)
            x+=i;
        else{
            x--;
            if(x%5==0)
                break;
        }
        printf("%d",x);
        printf("\nx=%d",x);
    }
    return 0;
}
