#include<stdio.h>
int main()
{
    int tst,i,j=1,a,c,b;
    scanf("%d",&tst);
    while(tst--){
            c=0;
            scanf("%d%d",&a,&b);
            for(i=a;i<=b;i++){
                if(i%2==1)
                    c=c+i;
            }
            printf("Case %d: %d\n",j++,c);
    }

    return 0;

}

