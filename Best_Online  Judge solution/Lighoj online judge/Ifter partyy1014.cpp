
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,a;
    int t,j=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        a=m-n;
        printf("Case %d: ",j++);
        if(n >= a){
            printf("impossible\n");
            continue;
        }
        vector<int>v;
        for(int i=1;i<=sqrt(a);i++){
            if(a % i==0){
                if(n<i)
                    v.push_back(i);
                     int b=a/i;
                if(b!=i && n<b)
                    v.push_back(b);
            }
        }

        sort(v.begin(),v.end());
      if(v.size() == 0)
       printf("impossible\n");
        else{
            for( int i = 0; i < v.size(); i++){
                printf("%d",v[i]);
                 if(i == v.size()-1)
                   printf("");
               else printf(" ");
            }

        }
        printf("\n");
    }
    return 0;

}


