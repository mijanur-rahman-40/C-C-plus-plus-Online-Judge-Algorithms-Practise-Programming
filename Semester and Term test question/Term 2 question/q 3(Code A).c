#include<stdio.h>
int main()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int i;
    for(i=0;i<10;i++){
    if(i%2==1)
       continue;

       else
        a[i]=a[i]++;
    }
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
    return 0;

}

