#include<iostream>
using namespace std;
#define sz 100
#define INF 9999999
int mat[sz][sz], dist[sz];
bool BellmanFord(int n, int e){
    int i, j, u, v;
    for(i=0;i<n;i++)
    dist[i] = INF;
    dist[0] = 0;
    for(i=0; i<=n-1; i++){
        for(u=0; u<n; u++){
            for(v=0; v<n; v++){
                if(mat[u][v] != 0)
                {
                    if(dist[u] != INF && mat[u][v] + dist[u] < dist[v])
                        dist[v] = mat[u][v] + dist[u];
                }
            }
        }
    }
    bool flag = false;
    for(u=0; u<n; u++){
        for(v=0; v<n; v++){
            if(mat[u][v] != 0){
                if(dist[u] != INF && mat[u][v]+dist[u] < dist[v])
                    flag = true;
            }
        }
    }
    return flag;
}
int main(){
    int i, j, v, e, s, t, d;
    cin>>v>>e;
    for(i=0;i<v;i++)
        for(j=0;j<v;j++)
            mat[i][j] = 0;
    for(i=0;i<e;i++){
        cin>>s>>t>>d;
        mat[s][t] = d;
    }
    if(!BellmanFord(v, e)){
        for(i=0;i<v;i++){
            cout<<"distance from 0 to "<<i<<" is: "<<dist[i]<<endl;
        }
    }
    else{
        cout<<"Graph contains negative cycle"<<endl;
    }
    return 0;
}
