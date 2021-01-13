#include<stdio.h>
int main()
{
    int n,a,m,tast;
    scanf("%d",&tast);
    while(tast--){
            scanf("%d",&a);
    //if (360 % (180 - a) == 0)
    m=360/(180-a);
    if (m>=3)
        {
           printf("YES\n");
        }
        else

           printf("NO\n");
    }
    return 0;
}



