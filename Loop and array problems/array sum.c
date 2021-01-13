#include<stdio.h>
int main()
{
    int i,a[5],n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++){
        sum+=a[i];
        printf("%d+",a[i]);
        }
        sum+=a[i];
        printf("%d=%d\n",a[i],sum);
return 0;
}
