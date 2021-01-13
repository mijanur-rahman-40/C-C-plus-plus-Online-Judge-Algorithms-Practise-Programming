#include<stdio.h>
int main()
{
     int a,b,c;
    while(scanf("%d%d",&a,&b)==2)
{
    if(a>b)
        c=a-b;
    else
        c=b-a;
    printf("%d\n",c);



}
return 0;
}
