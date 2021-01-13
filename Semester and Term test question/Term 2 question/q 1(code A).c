#include<stdio.h>
int main()
{
    int a[10]={2,5,6,3,4,1,3,7,8,9};
    int i;
    for(i=0;i<10;i++)
        a[i]+=i;
        for(i=0;i<10;i++){
            printf("%d\n",a[i]);

    }
    return 0;

}
