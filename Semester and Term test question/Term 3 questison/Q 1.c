#include<stdio.h>
int main()
{
    int i;
    int a[10]={18,5,6,0,14,2,3,7,11,9};
    for(i=0;i<10;i++){
        if(a[i]&1)
            a[i]++;
        a[i]=a[i]*i;
        printf(" a[i]=%d\n",a[i]);

    }
    return 0;

}
