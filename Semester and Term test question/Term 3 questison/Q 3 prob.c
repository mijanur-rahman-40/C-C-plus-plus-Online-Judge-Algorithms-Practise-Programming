#include<stdio.h>
int CALL(int x,int y)
{
printf("t= %d %d\n",x,y);
if(x<0||y>4)
        return 0;
       int  X=CALL(--x,y++);
        return X;
    }
int main()
{
    int X=CALL(2,3);
    printf("X=%d\n",X);
}

