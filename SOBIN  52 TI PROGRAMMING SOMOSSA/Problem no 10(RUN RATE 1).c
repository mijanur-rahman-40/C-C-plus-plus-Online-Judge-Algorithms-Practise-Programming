#include<stdio.h>
int main()
{
  int t,r1,r2,b;
    double current_rr,asking_rr,a,c,d;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&r1,&r2,&b);
        a=((double)r1);
        c=((double)r2);
        d=((double)b);

        current_rr=(c/(300-d)*6);
        asking_rr=(((a-c+1)/d)*6);
        printf("%0.2lf %0.2lf\n",current_rr,asking_rr);
    }
    return 0;
}
