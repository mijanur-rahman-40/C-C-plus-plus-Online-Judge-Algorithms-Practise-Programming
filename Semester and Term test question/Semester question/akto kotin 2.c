#include<stdio.h>
int main()
{
    int x=calculation(2,3);
    printf("%d\n",x);
}
    int calculation(int x,int y){
    if(x<0 || y>5)
       return 0;
       calculation(x-1,y+1);
       printf("%d%d\n",x,y);
       return x;
    }
