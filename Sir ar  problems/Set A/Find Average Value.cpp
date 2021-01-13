#include<stdio.h>
int main()
{
    int avg,num,n,i,s,j=1;
    scanf("%d",&n);
    while(j<=n){
    scanf("%d",&num);
    int n[num];
    for(i=1;i<=num;i++){
        scanf("%d",&n[i]);
        }
        printf("Case %d:",j++);
        s=0;
        for(i=1;i<=num;i++)
                s=s+n[i];
        avg=s/num;
        printf("%d\n",avg);

}
return 0;
}

