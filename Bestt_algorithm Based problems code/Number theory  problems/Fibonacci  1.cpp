#include<stdio.h>
int Fibo();
int main()
{
    int a;
    //scanf("%d",&a);
    printf("%d\n",Fibo());
    return 0;
}
int Fibo()
{
     int num,a=0,b=1,c;
      scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        c=a+b;
    a=b;
    b=c;
}
return c;
}





