#include<stdio.h>
long long int Fact(int n)
         {
            long long int multi=1,i;
             for(i=1;i<=n;i++)
                multi=multi*i;
             return multi;
         }
         int main()
         {
          long long int n;
          int t;
          scanf("%d",&t);
          while(t--){
           scanf("%lld",&n);
              double sum=0.0;
           long long int i;
         for(i=1;i<=n;i++){
            sum+=((double)i/Fact(i));
         }
         printf("%0.4lf\n",sum);
          }
           return 0;
         }





