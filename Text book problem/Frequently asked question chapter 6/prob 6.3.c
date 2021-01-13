#include<stdio.h>
int main()
{
    int x=6;
    switch(x)
    {


    default :x+=2;
    case 1: x=4;

    case 2: x++;
    break;
    //default :x+=2;
}
printf("%d",x);
}
