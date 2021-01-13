#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,n,a[100],x,j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sort(a,a+n);
    }
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }

    //int x,j,flag=0;
    scanf("%d",&x);
        for(j=0;j<n;j++){
            if(a[j]==x){
                printf("%d Found at the location %d ta\n",x,j+1);
            flag=1;
            break;
            }
        }
        if(flag==0)
            printf("%d is not found\n",x);

    return 0;
}
//#include<cstdio>
//#include<algorithm>
//
//
//using namespace std;
//int a[10001],b[10001];
//int main()
//{
//    int q,n,s,d,i,k,j,l;
//
//    l=0;
//    while(scanf("%d%d",&n,&q)==2)
//    {
//        if(n==0&&q==0) break;
//
//        for(i=0;i<n;i++)scanf("%d",&a[i]);
//        for(i=0;i<q;i++)scanf("%d",&b[i]);
//
//        sort(a,a+n);
//
//        printf("CASE# %d:\n",++l);
//
//        for(i=0;i<q;i++)
//        {k=0;
//            for(j=0;j<n;j++)
//            {
//                if(b[i]==a[j]&&k!=1)
//                {
//                   printf("%d found at %d\n",b[i],j+1);
//                   k=1;
//                }
//            }
//            if(k==0)printf("%d not found\n",b[i]);
//        }
//    }
//
//    return 0;
//}
