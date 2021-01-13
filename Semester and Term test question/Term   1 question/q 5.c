#include<stdio.h>
int main()
{
    int a,b=0,c[7]={1,2,3,4,5,6,7};
    for(a=0;a<7;a++)
    {
        if(a%3==0)
        b+=c[a]*3;
            else if(a%2==0)
            b+=c[a]*2;
            else  b+=c[a];

        printf("%d\t",c[a]);
        printf("%d\n",b);
}
    return 0;
}
