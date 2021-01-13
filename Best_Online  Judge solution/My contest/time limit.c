#include<stdio.h>
int main()
{
    int i,n=4,t,a[100],x;
  while(t--){
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
        x=a[0];
        for(i=0;i<n;i++){
            if(a[i]<x)
                x=a[i];
        }
        if(x==a[0])
        printf("Too Late\n");

        else if(x==a[1])
            printf("Bus\n");

        else if(x==a[2])
            printf("CNG\n");

               else if(x==a[3])
            printf("Walk\n");

}
return 0;
}
