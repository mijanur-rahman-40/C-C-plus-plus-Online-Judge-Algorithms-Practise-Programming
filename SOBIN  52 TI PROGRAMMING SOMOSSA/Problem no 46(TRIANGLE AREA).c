#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    int  a,b,c;
    double s;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&a,&b,&c);
        s=(double)(a+b+c)/2;
        printf("Area = %0.3lf\n",sqrt(s*(s-a)*(s-b)*(s-c)));
    }
    return 0;
}
