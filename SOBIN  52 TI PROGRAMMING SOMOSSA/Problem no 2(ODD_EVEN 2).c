#include<stdio.h>
int main()
{
    int t;
  long long int n;
    scanf("%d",&t);
    while(t--){
          scanf("%lld",&n);
        if(n%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;

}

