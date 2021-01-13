#include<stdio.h>
int main()
{
    int t,x,n,i;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&x,&n);
        if(x>n)
            printf("Invalid!\n");
            else{
        for(i=x;i<=n;i+=x){
            printf("%d\n",i);
        }
        }
        //or neser nimome
//        for(i=1;i<=n;i++){
//            if(i%x==0)
//                printf("%d\n",i);
//        }
    }
    return 0;
}
