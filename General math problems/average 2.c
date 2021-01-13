#include<stdio.h>
int main()
{
    int X,Y,Z,sum,average;
    printf("Enter X=",X);
    scanf("%d",&X);
    printf("Enter Y=",Y);
    scanf("%d",&Y);
    printf("Enter Z=",Z);
    scanf("%d",&Z);
    sum=X+Y+Z;
    printf("Total marks=%d\n",sum);
    printf("Average marks=%d\n",(sum)/3);
    return 0;


}
