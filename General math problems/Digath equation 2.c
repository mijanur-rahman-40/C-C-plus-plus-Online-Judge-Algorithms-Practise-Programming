//#include<stdio.h>
//#include<math.h>
//int main()
//{
//int a,b,c;
//double x1,x2;
//printf("a=");
//scanf("%d",&a);
//printf("b=");
//scanf("%d",&b);
//printf("c=");
//scanf("%d",&c);
////scanf("%d%d%d",&a,&b,&c);
//if
//    (b*b-4*a*c>0)
//{
//x1=(-b+sqrt(b*b-4*a*c)/(2*a));
//x2=(-b-sqrt(b*b-4*a*c)/(2*a));
//printf("the value of x1 is=%lf\n",x1);
//printf("the value of x2 is=%lf\n",x2);
//}
//else
//    {
//    printf("undefine\n");
//}
// // printf("x1=%f\n x2=%f\n",x1,x2);
// //printf("\n");
//  return 0;
//
//}
#include<stdio.h>

#include<math.h>

int main()

{

    double a,b,c,r1,r2,del;

    scanf("%lf %lf %lf",&a,&b,&c);

    del=(b*b)-(4*a*c);

    r1=(-b+sqrt(del))/(2*a);

    r2=(-b-sqrt(del))/(2*a);

    if(a!=0 && del>0)

    {

        printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);

    }

    else printf("impossible  to  calculate\n");





    return 0;

}
