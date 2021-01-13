#include<stdio.h>
#include<math.h>
int main()
{
    int n,b,c;
   double min,max;
    scanf("%d",&n);
    while(n--){

       scanf("%d%d",&b,&c);
    if(b==0 || c==0)
            break;
       max=sqrt(b*b+c*c);
        if(b<c)
            min=sqrt(c*c-b*b);
       printf("%0.4lf %0.4lf\n",min,max);
    }

}
