#include<stdio.h>
int main()
{
    int i,n,array[100],max1,max2;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
        }
        max1=0;//0 or -1;
        max2=-1;//o;
    for(i=0;i<n;i++){
            if(max1<array[i])
            {
                max2=max1;
                max1=array[i];
                }
            else if(max2<array[i]){
                max2=array[i];
            }
            }
            printf("the first largest is%d\n",max1);
            printf("the second largest is%d\n",max2);
            return 0;
        }

