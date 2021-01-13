#include<stdio.h>
int main()
{
    int i,n,a[100],x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
        x=-999999;

        for(i=0;i<n;i++){
            if(a[i]>x)
                x=a[i];
        }
        printf("the greatest number is%d",x);

return 0;
}

