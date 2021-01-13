#include<stdio.h>
 int main()
{
    int i,j,n,t,a[100],b=1;
    scanf("%d",&n);
    while(n--){

    for(i=0;i<3;i++){
           scanf("%d",&a[i]);
    }
          for(i=0;i<3;i++){
           for(j=i+1;j<3;j++){
            if(a[i]<a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;

            }
           }
          }
    printf("Case %d:",b++);
    for(i=0;i<3;i++){
        printf(" %d",a[i]);
    }
        printf("\n");

    }
    return 0;
}
