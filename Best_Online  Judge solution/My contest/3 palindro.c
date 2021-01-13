
#include<stdio.h>
#include<algorithm>

using namespace std;
  int main()
  {
      int n;
      while(scanf("%d",&n)==1)
      {
          for(int i=1;i<=n;i++)
          {
             printf("a");
             i++;
             if(i<=n)
             printf("a");
             i++;
             if(i<=n)
            printf("b");
           i++;
             if(i<=n)
            printf("b");
         }
         printf("\n");
     }
     return 0;
 }
