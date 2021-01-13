#include<stdio.h>
int find_sum(int ara[],int n);
int main()
{
    int ara[]={100,0,3,-3};
    //,22,83,23,89,-132,201,3,85};
    int n=4;
    int sum=find_sum(ara,n);
    printf("%d",sum);
    return 0;
}
int find_sum(int ara[],int n)

{
    int sum=0,i;

    for(i=0;i<n;i++){
        sum=sum+ara[i];

        }

return sum;
}
