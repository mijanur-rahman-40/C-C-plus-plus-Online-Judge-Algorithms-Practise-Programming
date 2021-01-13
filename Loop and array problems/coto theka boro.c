#include<stdio.h>
int main()
{
    int t,n1,n2,temp,kase;
    scanf("%d",&t);
    for(kase=1;kase<=t;kase++){
        scanf("%d%d",&n1,&n2);
        if(n1>n2){
            temp=n1;
            n1=n2;
            n2=temp;
        }
        printf("Case %d: %d %d\n",kase,n1,n2);
    }
    return 0;
}

