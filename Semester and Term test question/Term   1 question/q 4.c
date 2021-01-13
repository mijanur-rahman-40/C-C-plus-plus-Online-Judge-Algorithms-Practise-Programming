#include<stdio.h>
int main()
{
    int c[10]={7,22,33,44,51,63,77,80,91,100};
    int a,b=0;
    for(a=0;a<10;++a)
        if(c[a]&1)
        b+=c[a];
    printf("%d\n",b);

    return 0;
}
