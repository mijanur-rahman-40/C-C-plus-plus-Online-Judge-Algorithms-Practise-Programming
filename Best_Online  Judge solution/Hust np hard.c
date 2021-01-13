
/* #include<stdio.h>
int main()
{
    int a=1,b,tst,sum;
    scanf("%d",&tst);
    while(tst--){
        scanf("%d",&sum);
    b=sum-a;
    printf("%d %d\n",a,b);
    }
    return 0;
}
*/
#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d", &a);
    for(b=0; b<a; b++)
    {
        scanf ("%d", &c);
        if(c>10)
        {
            d=c-10;
            e=10;
            printf("%d %d\n",d,e);
        }
        else
        {
            d=0;
            printf("%d %d\n",d,c);
        }
    }
    return 0;
}
