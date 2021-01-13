#include<stdio.h>
int main()
{
    long int x,y,z,i=1,n,sum;
    scanf("%d",&n);
    while(i<=n){
      scanf("%d%d%d",&x,&y,&z);
    printf("Case %d : ",i++);
    sum=x+y+z;

    printf("%d\n",(sum)/3);
    }

    return 0;


}

