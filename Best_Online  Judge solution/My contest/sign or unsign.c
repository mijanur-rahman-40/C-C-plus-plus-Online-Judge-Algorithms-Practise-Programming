#include<stdio.h>
int main()
{
    int n,i,arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0,bount=0;
    for(i=0;i<n;i++){
    if(arr[i]>0)
        count++;
        else if(arr[i]<0)
            bount++;
}
printf("%d %d\n",count,bount);
return 0;
}


