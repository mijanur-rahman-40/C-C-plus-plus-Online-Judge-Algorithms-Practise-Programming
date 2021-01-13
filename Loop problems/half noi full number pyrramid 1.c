#include<stdio.h>
int main()
{
    int p,q,n,m;
    printf("How many lines :");
    scanf("%d",&n);
    for(p=1;p<=n;p++){
        for(q=1;q<=(n-p);q++)
            printf(" ");
            m=p;
            for(q=1;q<=p;q++)
            printf("%d",m++);
        m-=2;
        for(q=1;q<p;q++)
            printf("%d",m--);
        printf("\n");
        }
        return 0;
    }

