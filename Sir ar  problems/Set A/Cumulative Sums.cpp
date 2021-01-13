#include<stdio.h>
int main()
{

    int i,n,a,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      scanf("%d",&a);

    c=c+a;
    a=c;

    printf("%d ",c);
    }
return 0;
}

