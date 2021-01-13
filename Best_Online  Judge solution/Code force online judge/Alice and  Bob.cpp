#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,num1,num2;
    while(scanf("%d",&num)==1) {
          scanf("%d",&num1);
        int gc=num1,mx=num1;
        for(int i=1;i<num;++i) {
            scanf("%d",&num2);
            mx= max(mx,num2);
            gc=__gcd(gc,num2);
        }
        int ans=(mx/gc)-num;
        if(ans%2==1)
             printf("Alice\n");
          else
               printf("Bob\n");
    }
    return 0;
}
