#include<stdio.h>
int main()
{
    int n,arr[100],i,tst;
    scanf("%d",&tst);
    while(tst--);{
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(i=0;i<n;i++){
        count++;
    }

    printf("%d\n",count);
    }
    return 0;
}
