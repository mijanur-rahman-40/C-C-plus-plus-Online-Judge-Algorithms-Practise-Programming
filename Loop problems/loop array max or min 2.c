#include<stdio.h>
int main()
{
    int i,n,array[100],max,min,difference;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        }
        max=-1;//0 or -1;
        min=0;//o;
    for(i=0;i<n;i++){
            if(max<array[i])
            {
               // max2=max1;
                max=array[i];
                }

           // else if(max2>array[i]){
            for(i=0;i<n;i++){
            if(min<array[i]){
               min=array[i];
            }
            }
           }
           difference=-(max-min);
            printf("the is%d\n",difference);
            //printf("the min is%d\n",min);
            return 0;
        }

