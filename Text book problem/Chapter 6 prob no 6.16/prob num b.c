#include<stdio.h>
int main()
{
    int i=0,x=0;
    //while(i<20)
    do{
        if(i%5==0)
        {
            x++;
            printf("%d\n",x);
        }
        ++i;
    }
    while(i<20);
        //printf("\nx=%d",x);
        return 0;
}

