
#include <bits/stdc++.h>
using namespace std;

vector<int> bellmanFord(int n,int source, vector<pair<int, int> > G[])  {
      int INF = (int) 1e9;
      vector<int> D(n, INF);
      D[source]=0;
      for(int i=0; i<n-1; i++)  {
        for(int u=0; u<n; u++)  {
          for(auto j: G[u])  {
            int v = j.first, w = j.second;
            if(D[u]!=INF)
                D[v] = min(D[v], D[u] + w);
          }
        }
      }
      //To find if a negative cycle exists.
      for(int u=0; u<n; u++)  {
        for(auto edge: G[u])  {
          int v = edge.first, w = edge.second;
          if(D[u]!=INF and D[v] > D[u] + w) {
            //Negative Cycle exists!!
            assert(0);
          }
        }
      }
      return D;
}

int main(){
    int n,m,s,x,y,z;
    cin>>n>>m>>s; //Input the number of nodes(0 based), number of edges and the source vertex.
    vector<pair<int,int> >*G=new vector<pair<int,int> >[n];
     //vector<pair<int,int> >G[n];
    vector<int>ans;
    for(int i=0;i<m;i++){
        cin>>x>>y>>z; //Input the starting vertex of the edge, the ending vertex and the cost of the edge.
        G[x].push_back(make_pair(y,z));
    }
    ans = bellmanFord(n,s,G); //ans has the cost from source to all the vertices.
    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<endl;

}


/*

#include <stdio.h>
#include <stdlib.h>
int Bellman_Ford(int G[20][20] , int V, int E, int edge[20][2])
{
    int i,u,v,k,distance[20],parent[20],S,flag=1;
    for(i=0;i<V;i++)
        distance[i] = 1000 , parent[i] = -1 ;
        printf("Enter source: ");
        scanf("%d",&S);
        distance[S-1]=0 ;
    for(i=0;i<V-1;i++)
    {
        for(k=0;k<E;k++)
        {
            u = edge[k][0] , v = edge[k][1] ;
            if(distance[u]+G[u][v] < distance[v])
                distance[v] = distance[u] + G[u][v] , parent[v]=u ;
        }
    }
    for(k=0;k<E;k++)
        {
            u = edge[k][0] , v = edge[k][1] ;
            if(distance[u]+G[u][v] < distance[v])
                flag = 0 ;
        }
        if(flag)
            for(i=0;i<V;i++)
                printf("Vertex %d -> cost = %d parent = %d\n",i+1,distance[i],parent[i]+1);

        return flag;
}
int main()
{
    int V,edge[20][2],G[20][20],i,j,k=0;
    printf("BELLMAN FORD\n");
    printf("Enter no. of vertices: ");
    scanf("%d",&V);
    printf("Enter graph in matrix form:\n");
    for(i=0;i<V;i++)
        for(j=0;j<V;j++)
        {
            scanf("%d",&G[i][j]);
            if(G[i][j]!=0)
                edge[k][0]=i,edge[k++][1]=j;
        }

    if(Bellman_Ford(G,V,k,edge))
        printf("\nNo negative weight cycle\n");
    else printf("\nNegative weight cycle exists\n");
    return 0;
}
*/

/*
9 14 0
0 1 4
0 7 8
1 2 8
1 7 11
7 8 7
7 6 1
8 6 6
2 8 2
6 5 2
2 3 7
2 5 4
3 5 14
3 4 9
4 5 10

ans is : 0 4 12 19 28 11 9 8 14
negative cycle
4 5 0

*/



/*

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int> >Adj[100];
    int node,edge,wet;
    scanf("%d%d",&node,&edge);
    int source;
     scanf("%d",&source);
    for(int i=0; i<edge; i++){
            int u,v;
    scanf("%d%d%d",&u,&v,&wet);
    Adj[u].push_back(make_pair(v,wet));
    }
     int INF = (int) 1e9;
     vector<int> Dis(node, INF);

     Dis[source] = 0;
     for(int i=0; i<node-1; i++){
        for(int u= 0; u<node; i++){
            for(auto k: Adj[u])  {
            int v = k.first, w = k.second;
            if(Dis[u] != INF)
                Dis[v] = min(Dis[v], Dis[u] + w);
                }
            }
         }
       for(int i=0; i<node; i++){
        cout<<Dis[i]<<endl;
       }
}

*/


