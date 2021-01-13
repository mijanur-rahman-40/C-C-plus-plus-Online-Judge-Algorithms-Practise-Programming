#include<stdio.h>
int main()

{
   long int a,b,c,i;
    int t;
    scanf("%d",&t);
    while(t--){
            scanf("%ld%ld%ld",&a,&b,&c);
        for(i=1;i<=c;i++){
            if(i%a==0 && i%b==0){
            printf("%d\n",i);
            }
    }
    }
    return 0;
}
