#include<stdio.h>
int main()
{
    int a,b,c,tst;
    scanf("%d",&tst);
     while(tst--){
            scanf("%d%d%d",&a,&b,&c);
    if(a>100 || a<1)
        break;
   else if(b>100 || b<1)
        break;
        else if(c>100 || c<1)
        break;

    printf("%d\n",(a*b*c));
    }
}

