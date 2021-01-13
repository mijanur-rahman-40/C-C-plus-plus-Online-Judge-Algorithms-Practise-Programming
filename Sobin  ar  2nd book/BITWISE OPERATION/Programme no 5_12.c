#include<stdio.h>
int main()
/*
{
    int ara[]={1,2,3,4,1,2,3};
    int result,i,n=7;
    result =ara[0];
    while(scanf("%d%d",&result,&i)==2){
   // for(i=1;i<n;i++){
       // result=result^ara[i];
       result=result^i;
    printf("Result :%d\n",result);
    }
    return 0;
}
*/
{
    int num1,num2;
    while(scanf("%d%d",&num1,&num2)==2)
    {
        printf("%d\n",num1^num2);
    }
    return 0;
}
