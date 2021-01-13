#include<stdio.h>
int main()
{
    int x,n,m;
    while(1)
    {
        printf("Please enter your number(0 to exit): ");
        scanf("%d",&x);
        if(n==0){
            break;
        }
        printf("How many bits you want to shift left?");
        scanf("%d",&n);
        m=n<<x;
        printf("Result is %d\n\n",m);
    }
    return 0;
}
