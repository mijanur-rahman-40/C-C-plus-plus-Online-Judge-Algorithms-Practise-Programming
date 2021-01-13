#include<stdio.h>
int main()
{
    int i,n,array[100],max,min,difference;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        }
        max=-1;
        min=0;
    for(i=0;i<n;i++){
            if(max<array[i])
{
                max=array[i];
                }
                for(i=0;i<n;i++){
            if(min<array[i]){
               min=array[i];
            }
            }
    }
           difference=-(max-min);
            printf("the  maximum difference is%d\n",difference);

            return 0;
        }
