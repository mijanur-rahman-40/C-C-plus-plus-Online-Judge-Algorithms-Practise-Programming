//#include<stdio.h>
// int main()
//{
//    int i,j,n,t,a[100],b=1;
//    scanf("%d",&n);
//    while(n--){
//
//    for(i=0;i<3;i++){
//           scanf("%d",&a[i]);
//    }
//          for(i=0;i<3;i++){
//           for(j=0;j<3;j++){
//            if(a[i]<a[j]){
//                t=a[i];
//                a[i]=a[j];
//                a[j]=t;
//
//            }
//           }
//          }
//    printf("Case %d:",b++);
//    for(i=0;i<3;i++){
//        printf(" %d",a[i]);
//    }
//        printf("\n");
//
//    }
//    return 0;
//}
#include<stdio.h>
int main()
{
    int t,n1,n2,n3,temp,kase;
    scanf("%d",&t);
    for(kase=1;kase<=t;kase++){
        scanf("%d%d%d",&n1,&n2,&n3);
        if(n1>n2){
            temp=n1;
            n1=n2;
            n2=temp;
        }
         if(n1>n3){
            temp=n1;
            n1=n3;
            n3=temp;
        }
         if(n2>n3){
            temp=n2;
            n2=n3;
            n3=temp;
        }
        printf("Case %d: %d %d %d\n",kase,n1,n2,n3);
    }
    return 0;
}



