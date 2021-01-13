#include<stdio.h>
int main()
{
    int i,b,c,a,n,m,t;
    scanf("%d",&t);
    while(t--){
    //scanf("%d",&m);
    scanf("%d",&n);
    c=n%10;
    for(i=0;i<5;i++){
        b=n%10;
          n=n/10;
          a=b;
    }
    printf("Sum = %d\n",c+a);
    }
    return 0;
}
//jakono num ar sum
//#include<stdio.h>
//int main()
//{
//    int i,b,c,a,n,t;
//    scanf("%d",&t);
//    //while(t--){
//   for(i=0;i<t;i++){
//    scanf("%d",&n);
//    c=n%10;
//   while(n>0){
//        b=n%10;
//          n=n/10;
//          a=b;
//    }
//    printf("Sum = %d\n",c+a);
//    }
//    return 0;
//}
