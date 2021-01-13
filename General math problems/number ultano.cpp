
#include<stdio.h>
int main()
{
    int n,mod,reverse;
    printf("enter the number");
    scanf("%d",&n);
    while(n>0){
    reverse=n%10;
     n=n/10;
     printf("%d",reverse);
    }
    return 0;

}



/*
#include <stdio.h>
int main()
{
    int n, reversedNumber = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n != 0){
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    printf("Reversed Number = %d", reversedNumber);
    return 0;
}
*/
