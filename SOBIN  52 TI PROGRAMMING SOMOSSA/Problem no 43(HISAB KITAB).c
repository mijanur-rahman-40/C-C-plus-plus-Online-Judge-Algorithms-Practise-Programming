#include<stdio.h>
#include<math.h>
int main()
{
   int t,p,q,r,b,j;
   scanf("%d",&t);
   while(t--){
        int temp=1;
    scanf("%d%d%d",&p,&q,&r);
    for(j=1;j<=q;j++){
    temp=(temp*p)%r;
    }
    printf("Result = %d\n",temp);
   }
   return 0;
}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//   int t,p,q,r,b;
//   double c;
//   scanf("%d",&t);
//   while(t--){
//    scanf("%d%d%d",&p,&q,&r);
//    c=pow(p,q);
//    b=(int)c%r;
//    printf("Result = %d\n",b);
//   }
//   return 0;
//}
