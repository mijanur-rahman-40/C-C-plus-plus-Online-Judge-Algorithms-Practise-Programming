#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    while(n>0){
        count++;
        n=n/10;
    }
    printf("count is %d",count);
    return 0;


}

