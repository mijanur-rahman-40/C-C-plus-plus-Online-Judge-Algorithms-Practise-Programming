#include<stdio.h>
int main()
{
    int i,arr[1000],t,max,min;
    scanf("%d",&t);
    while(t--){
        for(i=0;i<5;i++){
            scanf("%d",&arr[i]);
        }
        max=-9999990;
        min=99999999;
        for(i=0;i<5;i++){
            if(max<arr[i])
            max=arr[i];
            }
        for(i=0;i<5;i++){
        if(min>arr[i])
            min=arr[i];
        }

        printf("%d %d\n",max,min);

    }
    return 0;

}
