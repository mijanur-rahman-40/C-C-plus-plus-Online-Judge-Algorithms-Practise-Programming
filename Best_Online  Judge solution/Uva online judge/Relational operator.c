#include<stdio.h>
int main()
{
    long int a,b;
    int i;
    scanf("%d",&i);
    while(i--){
    scanf("%ld%ld",&a,&b);
    if(a>b)
        printf(">\n");
    else if(a<b)
        printf("<\n");
    else
        printf("=\n");
    }
    return 0;
}


