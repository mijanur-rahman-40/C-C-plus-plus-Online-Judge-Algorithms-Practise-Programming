#include<stdio.h>
int function(int *p)
{
    //use *p or p[] for parameter
    int i,sum=0;
    for(i=0;i<5;i++)
        p[i]++;
    }
    int main()
    {
         int i;
        int a[]={10,20,30,40,50};
        function(a);
        for(i=0;i<5;i++)
            printf("%d\n",a[i]);
            return 0;
    }

