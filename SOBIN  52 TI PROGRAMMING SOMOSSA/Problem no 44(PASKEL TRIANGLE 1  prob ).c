#include<stdio.h>
int main()
{
    int t;
    int odd[222],even[232];
    int i,j,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        even[0]=1;
        even[1]=1;
        for(i=3;i<=n;i++){
                if(i%2==0)
                even[0]=1;
        for(j=0;j<i-1;j++){
            even[j]=odd[j-1]+odd[j];
        }
        even[j]=1;
        }
        else{
            odd[0]=1;
            for(j=1;j<i-1;j++){
                odd[j]=even[j-1]+even[j];
                odd[j]=1;
            }
        }

    }
}
