
/*
#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;
int main(){
  int tst,j=1;
  cin>>tst;
  while(tst--){
        int node,edge;
    cin>>node>>edge;
    int mat[101][101];
    for(int i=0;i<node;i++)
        for(int j=0;j<node;j++){
            if( i==j )
                mat[i][j]=0;
            else
                mat[i][j]= INF;
        }
    for(int i=0;i<edge;i++){
          int x,y;
          cin>>x>>y;
          mat[x][y] = 1;
          mat[y][x] = 1;
    }
    for(int k=0; k<node; k++)  {
        for(int i=0; i<node; i++)  {
          for(int j=0; j<node; j++)  {
            mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
          }
        }
     }
        int source,destination;
        cin>>source>>destination;
        int ans = 0;
        cout<<"Case "<<j++<<": ";
            for(int j=0; j<node; j++){
               ans = max(ans,mat[source][j] + mat[j][destination]);
            }
        cout<<ans<<endl;
  }
}
*/


/*

2
4
3
0 1
2 1
1 3
0 3
Case 1: 4

0 1 2 2
1 0 1 1
2 1 0 2
2 1 2 0

*/


#include<bits/stdc++.h>
using namespace std;
const int INF = 100000000;
int mat[101][101];
int main()
{
    int tst,j = 1;
    cin>>tst;
    while(tst--){
        int buildings,roads;
        cin>>buildings>>roads;

        for(int i=0; i<buildings; i++){
            for(int j=0; j<buildings; j++){
                if(i == j){
                    mat[i][j] = 0;
                }
                else
                    mat[i][j] = INF;
            }
        }
        for(int i=0; i<roads; i++){
            int u,v;
            cin>>u>>v;
            mat[u][v] = 1;
            mat[v][u] = 1;
        }
        for(int k=0; k<buildings; k++){
            for(int i=0; i<buildings; i++){
                for(int j=0; j<buildings; j++){
                    mat[i][j] = min(mat[i][j],mat[i][k] + mat[k][j]);
                }
            }
        }
        int source,destination,ans = 0;
        cin>>source>>destination;
        cout<<"Case "<<j++<<": ";
        for(int i=0; i<buildings; i++){
           ans = max(ans,mat[source][i] + mat[i][destination]);
        }
        cout<<ans<<endl;
    }
    return 0;
}



