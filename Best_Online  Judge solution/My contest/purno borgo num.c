#include<stdio.h>
#include<math.h>
int main()
{
     int n,c;
  double b;
    int t;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
   b=sqrt((double)n);
   c=b;

    if(c==b)
        printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
