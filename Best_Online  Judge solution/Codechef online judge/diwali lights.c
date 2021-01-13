#include<stdio.h>
int main()
{
    int t,i,n,r;
    scanf("%d",&t);
    while(t--){
        r=1;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            r=2*r;
            if(r>100000)
                r=r%100000;
        }
        printf("%d\n",r-1);
    }
    return 0;
}

