#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y){
        int cost[x][y];
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                cin>>cost[i][j];
            }
        }
        int min_cost[x][y];
        min_cost[0][0]=cost[0][0];
        for(int j=1; j<y-1; j++){
                min_cost[0][j]=min_cost[0][j-1]+cost[0][j];
        }
           for(int i=1; i<x-1; i++){
                min_cost[i][0]=min_cost[i-1][0]+cost[i][0];
        }
        for(int i=1; i<x-1; i++){
            for(int j=1; j<y-1; j++){
        min_cost[i][j]=min(min_cost[i-1][j],min_cost[i][j-1])+cost[i][j];
            }
        }
        cout<<"Minimum cost "<<min_cost[x-1][y-1];
    }
    return 0;
}

