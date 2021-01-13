#include <stdio.h>
int main(){
    int t,n,i;

    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n%2==1 )
            printf("0\n");
            else{
                int ans=0;
            n >>= 1;

            for(i=1;i<=n/i;++i){
                if(n%i== 0){
                   if(i != n/i) ans += 2;
                    else
                        ++ans;
                }
            }

            printf("%d\n",ans);
        }
}

    return 0;
}
