#include<stdio.h>
int main()
{
    long long  int n,a=0;
    int i,b,j;
    scanf("%lld",&n);
    b=n*(n+1)/2;
    for(i=0;i<n;i++){
        scanf("%d",&j);

    a+=j;
    }
    if(a=b)
        printf("YES");

    else
        printf("NO");
    return 0;


}
