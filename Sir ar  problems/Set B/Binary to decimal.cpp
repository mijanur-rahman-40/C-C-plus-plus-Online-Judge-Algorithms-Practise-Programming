
#include<stdio.h>
#include<math.h>

int main()
{
     int i,n,x=0,a;
    printf("Enter any binary number: ");
    scanf("%d",&n);
    printf("\nThe decimal conversion of %d is ",n);

    for(i=0;n>0;++i)
    {
        a=n%10;
        x=(a)*(pow(2,i))+x;
        n=n/10;
    }

    printf("%d",x);

    return 0;
}
