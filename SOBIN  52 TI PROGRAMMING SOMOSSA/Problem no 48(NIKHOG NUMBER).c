#include<stdio.h>
int main()
{
    int n,t,i,j,sum;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        sum=0;
       for(i=0;i<(n-1);i++){
        scanf("%d",&j);
        sum+=j;
    }
        printf("%d\n",(n*(n+1)/2)-sum);
    }
    return 0;
}
//UPORAR TA ARAKTO EFFICENT
//#include<stdio.h>
//int main()
//{
//    int ara[100001];
//    int i,n,t,num,missing;
//    scanf("%d",&t);
//    while(t--){
//        scanf("%d",&n);
//        for(i=1;i<=n;i++)
//            ara[i]=0;
//        for(i=0;i<n-1;i++){
//            scanf("%d",&num);
//            ara[num]=1;
//        }
//        for(i=1;i<=n;i++){
//            if(ara[i]==0){
//                missing=i;
//                break;
//            }
//        }
//        printf("Missing number: %d\n",missing);
//
//    }
//    return 0;
//}
//NISAAAAR TA AKTO KOM EFFICENT
//#include<stdio.h>
//int main()
//{
//    int t,n,i,j,found;
//    int arr[853];
//    scanf("%d",&t);
//    while(t--){
//        scanf("%d",&n);
//        for(i=0;i<n-1;i++){
//            scanf("%d",&arr[i]);
//        }
//        for(i=1;i<=n;i++){
//            found=0;
//            for(j=0;j<n-1;j++){
//                    if(i==arr[j]){
//                        found=1;
//                    }
//            }
//                    if(found==0){
//                        printf("Missing number: %d\n",i);
//        }
//    }
//    }
//    return 0;
//}
