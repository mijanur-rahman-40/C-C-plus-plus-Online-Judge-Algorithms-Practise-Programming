#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&a);
    n=20;
    int *p=&n;
    printf("%d %d\n",*p,a);
    return 0;


}
