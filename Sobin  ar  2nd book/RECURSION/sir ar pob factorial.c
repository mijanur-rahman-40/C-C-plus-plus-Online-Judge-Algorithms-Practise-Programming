#include<stdio.h>
   int fibo(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    return fibo(n-1)+(n-2); //ae sutro 0 theka soro hole ar 1 theka soro hole fibo(n-1)+fibo(n-2)

}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fibo(n));
    return 0;
}
