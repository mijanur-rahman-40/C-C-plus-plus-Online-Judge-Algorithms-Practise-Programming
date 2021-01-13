#include<stdio.h>
int main()
{
    int t;
    long int a,b,c,i;
    scanf("%d",&t);
    while(t--){
        scanf("%ld%ld%ld",&a,&b,&c);
        for(i=a;i<=b;i++){
            if(i%c==0)
                printf("%d\n",i);
        }
    }
    return 0;
}
