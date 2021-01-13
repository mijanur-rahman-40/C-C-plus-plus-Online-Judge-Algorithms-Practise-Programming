#include<stdio.h>
int main()
{
    int i,n,a[100],x;
scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
        //x=-999999;
        //in minimization use x=+999999 and a[i]<x
        x=a[0];
        for(i=0;i<n;i++){
            if(a[i]<x)
                x=a[i];
        }
                printf("the smaller number is %d",x);




return 0;
}
