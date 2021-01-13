#include<stdio.h>
int main()
{
    int i,j,arry[50],n,a,h=0,l=0;

   while(scanf("%d",&a)==1){
   for(j=1;j<=a;j++){
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&arry[i]);
            for(i=1;i<n;i++){
                if(arry[i]>arry[i-1])
                    h=h+1;
                if(arry[i-1]>arry[i])
                    l=l+1;
            }
        printf("Case %d: %d %d\n",j,h,l);
   }
   }
    return 0;
}
