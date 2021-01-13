#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    map<int,int>mpp;
    int n,q,a,i=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&q,&a);
        if(q==1)
            mpp[a]=i++;
        else{
            if(mpp.count(a)>0)
                printf("yes %d\n",mpp[a]);
            else
                printf("no\n");
        }
    }
    printf("\n\n\n");
    for(__typeof(mpp.begin())it=mpp.begin();it!=mpp.end();it++){
        printf("%d %d\n",it->first,it->second);
    }
    return 0;
}
