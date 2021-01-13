#include<bits/stdc++.h>
using namespace std;
int coun[1000]={0};
int main()
{
    int tst,j=1;
    scanf("%d",&tst);
    while(tst--){
        int n,m;
        scanf("%d%d",&n,&m);
        pair<int,int>pai[1000];
        for(int i=0; i<n; i++){
                int x,y;
        scanf("%d%d",&x,&y);
            pai[i].first = x;
            pai[i].second = y;
        }
        int arr[m];
        for(int i=0; i<m; i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(pai[j].first<=arr[i] && pai[j].second>=arr[i]){
                    coun[i]++;
                }
            }
        }
        printf("Case %d:\n",j++);
        for(int i=0; i<m; i++){
            printf("%d\n",coun[i]);
        }
    }
    return 0;
}
