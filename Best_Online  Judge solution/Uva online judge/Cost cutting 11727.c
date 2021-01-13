#include<stdio.h>
int main()
{
int a,b,c,T,i=1,ans;
scanf("%d",&T);
        while(i<=T)
            {
             scanf("%d %d %d",&a,&b,&c);
             if((a>b && a<c)||(c<a && a<b))
                ans=a;

             if((b>a && b<c)||(c<b && b<a))
             ans=b;

            if((c>a && b>c)||(c>b && a>c))
                ans=c;
            printf("Case %d: %d\n",i,ans);
            i++;
             }
return 0;
}
