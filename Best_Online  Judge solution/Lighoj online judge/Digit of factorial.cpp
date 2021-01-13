#include<bits/stdc++.h>
using namespace std;
const int MAX=1000000+5;
double func[MAX];
int main()
{   int i=1,t,m,n;
    for(int  i=1;i<=MAX;i++){
        func[i]=func[i-1]+log(i*1.0);
        }
        scanf("%d",&t);
        while(t--){
                scanf("%d%d",&m,&n);
       double sum=(floor(func[m]/log(n*1.0)+1));
       printf("Case %d: %.0lf\n",i++,sum);
        }

   return 0;
}
