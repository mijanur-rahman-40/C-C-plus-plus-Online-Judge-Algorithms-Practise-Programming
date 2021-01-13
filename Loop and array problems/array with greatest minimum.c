#include<stdio.h>
int main()
{
    int i,n,a[100],x,y,j;
    scanf("%d",&n);



    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    y=x=2147483647;
    int ans = x , pre_min = -y , step ;

    for(step = 1 ; step<n ; step++)
    {
        y=x=2147483647;

        for(i=0; i<n; i++)
        {
            if(a[i]>pre_min && a[i]<x)
                x=a[i];
        }

        for(i=0; i<n; i++)
        {
            if(a[i] > pre_min && a[i]>x && a[i]<y)
                y=a[i];
        }

        if(y-x < ans)
            ans = y-x ;

        pre_min = x ;
    }
    printf("%d",ans);
    return 0;
}
