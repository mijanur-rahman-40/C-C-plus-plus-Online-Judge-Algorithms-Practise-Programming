//#include<stdio.h>
//int main()
//{
//    int tst,x;
//    long int u,v;
//    double t;
//    scanf("%d",&tst);
//    while(tst--){
//    scanf("%ld%ld%d",&u,&v,&x);
//    t=(double)x/((double)u+(double)v);
//    printf("%0.10lf\n",t);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int t,i,x,arry[1000];
//    scanf("%d",&t);
//    for(x=0;x<t;x++){
//        scanf("%d",&arry[x]);
//    }
//    int sum=0;
//    for(i=0;i<t;i++){
//        sum=sum+arry[i];
//    }
//    printf("%d\n",sum);;
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a1,a2,a3;
//    int b1,b2,b3;
//    scanf("%d%d%d",&a1,&a2,&a3);
//      scanf("%d%d%d",&b1,&b2,&b3);
//      if(a1>b1 || a1<b1)
//        printf("1");
//      if(a2>b2 || a2<b2)
//        printf(" 1");
//       if(a3>b3 || a3<b3)
//        printf(" 1");
//       printf("\n");
//        return 0;
//}


#include<stdio.h>
int main()
{
    long int a ,b,c;
    scanf("%ld%ld"&a,&b);
    c=a+b;
    printf("%ld\n",c);
    return 0;
}
