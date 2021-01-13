#include<stdio.h>
#define MAX_IN
int main()
{
    int n1,n2,n3;
    int tst;
    scanf("%d",&tst);
    while(tst--){
          scanf("%d%d",&n1,&n2);
    n3=n1^n2;
    printf("%d ^ %d = %d\n",n1,n2,n3);
    }
    return 0;
}

