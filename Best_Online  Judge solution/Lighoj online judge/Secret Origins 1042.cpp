#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){

    int T,n,save;
    scanf("%d",&T);
    for(int t=1;t<=T;t++){

        scanf("%d",&n);
        save = 0;
        for(int i=1;i<=30;i++){
            if(n&1){
                save++;
                if(!((n>>1)&1)){
                    n = (n>>1)+1;
                    n = n<<(i);
                    for(int j=0;j<save-1;j++){
                        n = n|(1<<j);
                    }
                    break;
                }
            }
            n = n>>1;
        }
        printf("Case %d: %d\n",t,n);

    }

    return 0;
}
