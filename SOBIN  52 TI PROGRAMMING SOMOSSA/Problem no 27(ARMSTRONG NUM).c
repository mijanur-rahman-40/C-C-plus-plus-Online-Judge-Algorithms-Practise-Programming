#include<stdio.h>
int main()
{
    int  temp,t,rem,res=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&temp);
        int n;
       n=temp;
        while(n!=0){
            rem=n%10;
            res+=(rem*rem*rem);
            n=n/10;
        }
        if(res==temp)
        printf("%d is an armstrong number!\n",temp);
        else
             printf("%d is not an armstrong number!\n",temp);
    }
    return 0;
}
