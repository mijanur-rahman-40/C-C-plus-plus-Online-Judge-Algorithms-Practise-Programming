#include<stdio.h>
int main()
{
    int tst,n;
    scanf("%d",&tst);
    while(tst--){
        scanf("%d",&n);
        if(n>=10)
        printf("%d %d\n",(n-10),(n-(n-10)));
        else
        {
            printf("%d %d\n",(n-n),n);
        }
    }
    return 0;
}
