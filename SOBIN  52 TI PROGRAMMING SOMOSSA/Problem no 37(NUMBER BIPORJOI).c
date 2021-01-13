#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    long long int num,rev;
    rev=0;
    while(t--){
        scanf("%lld",&num);
        while(num !=0){
            rev=rev*10;
            rev=rev+num%10;
            num=num/10;
        }
        printf("%lld\n",rev);
        rev=0;
    }
    return 0;
}
