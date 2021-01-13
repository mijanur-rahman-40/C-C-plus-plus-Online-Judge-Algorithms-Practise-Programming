#include<stdio.h>
int main()
{
    int a[10]={1,10,20,30,40,50,60,70,80,90};
    int i;
    for(i=0;i<10;i++)
    if((i+1) & 1){
            a[i]++;
    continue;

    }
    else
        a[i]=a[i]-a[i-1];
    for(i=0;i<10;i++)
        printf("%d\n",a[i]);
    return 0;

}
