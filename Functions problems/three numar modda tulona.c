#include<stdio.h>
int minimum(int a,int b)
{    int temp;
//    if(a>=b && b<=c)
//        temp=b;
//    else if(b>=c && a>=c)
//        temp=c;
     if(a>=b)
        temp=b;
        else
            temp=a;
    return temp;
}
int main()
{
    int d,e,f,t1,t2;

    scanf("%d%d%d",&d,&e,&f);
    //t1=minimum(d,e,f);
    t1=minimum(d,e);
    t2=minimum(t1,f);
    printf("%d\n",t2);
    return 0;
}
