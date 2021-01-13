#include<stdio.h>
int main()
    {
        int a,b;
        while(scanf("%d%d",&a,&b)==2){
        if(a<b)

            printf("%d %d\n",a,abs(a-b)/2);
       else
           printf("%d %d\n",b,abs(a-b)/2);
        }
        return 0;
    }


