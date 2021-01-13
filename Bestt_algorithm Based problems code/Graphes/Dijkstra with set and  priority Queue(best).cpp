/*
#include <bits/stdc++.h>
using namespace std;
//const int INF = INT_MAX;
vector<int> dijkstra(int node,int source,vector<pair<int,int> >Adj[]) {
    int INF = (int)1e9;
    vector<int>  Dis(node, INF);
    Dis[source] = 0;
    set<pair<int, int> > Q;
    Q.insert( {0,source} );
    while(!Q.empty())   {
        auto top = Q.begin();
        int u = top->second;
        Q.erase(top);
        for( auto next: Adj[u] ) {
            int  v =  next.first;
            int  weight = next.second;
            if( Dis[u] + weight < Dis[v] ) {
                if(Q.find( {Dis[v],v} )!=Q.end())
                    Q.erase(Q.find( {Dis[v], v} ));
                Dis[v] = Dis[u] + weight;
                Q.insert( {Dis[v], v} );
            }
        }
    }
    return Dis;
}
int main(){
    int node,edge,s,u,v,w;
    cin>>node>>edge>>s;
    vector<pair<int,int> > *Adj=new vector<pair<int,int> >[node];
    vector<int>ans;
    for(int i=0;i<edge;i++){
        cin>>u>>v>>w;
        Adj[u].push_back(make_pair(v,w));
    }
    ans=dijkstra(node,s,Adj);
    for(int i=0;i<node;i++)
        cout<<ans[i]<<" ";
    cout<<endl;
}
*/

/*
 node 20
 0 1 3
 1 2 1
 2 3 2
 3 4 9
 0 5 7
 1 6 3
 2 7 4
 3 8 9
 4 9 9
 5 6 3
 6 7 4
 7 8 9
 8 9 9
 5 10 1
 6 11 7
 7 12 5
 8 13 5
 9 14 3
 10 11 7
 11 2 5
 12 13 5
 13 14 3
 10 15 2
 11 16 3
 12 17 4
 13 18 2
 14 19 5
 15 16 3
 16 17 4
 17 18 2
 18 19 5


*/


#include<bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;
//define pp pair<int,int>
int dis[1000]={INF};
using namespace std;
/*
class Prioritize
{
public:
    int operator() ( const pair<int, int>& p1, const pair<int, int>& p2 )
    {
        return p1.second < p2.second;
    }
};
*/
int main()
{
    //priority_queue<pp, vector<pp > , Prioritize > Q;
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >Q;
    int node;
    cin>>node;
    vector<pair<int,int> >Adj[node+1];
    int edge,u,v,w;
    cin>>edge;
    for(int i=0;i<edge;i++){
        cin>>u>>v>>w;
        Adj[u].push_back(make_pair(v,w));
       // Adj[v].push_back(make_pair(u,w));
    }
    int source;
    cin>>source;
    int dis[node+1];
    dis[source] =0;
    Q.push(make_pair(source,dis[source]));
    while(!Q.empty()){
        u =Q.top().first;
        int p;
        p=Q.top().second;
       // cout<<"top().first= "<<u<<" top().second= "<<p<<endl;
        Q.pop();
        for(int i = 0 ; i<Adj[u].size(); i++){
            v = Adj[u][i].first;
            w = Adj[u][i].second;
        //cout<<"u  ="<<u<<" "<<"v ="<<v<<" "<<"w ="<<w<<endl;
            if(dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                //cout<<"dis[v] ="<<dis[v]<<endl;
                Q.push(make_pair(v,dis[v]));
            }
        }
    }
    for(int i=1; i<node; i++){
        printf("Node %d ar, min distance = %d\n", i, dis[i]);
    }
    return 0;
}


/*
5 6
0 1 2
1 4 5
0 3 1
3 2 3
2 4 1
1 2 4
0
02415

5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

input
6 16
1 2 2
1 3 3
2 4 5
2 5 2
3 5 5
4 5 1
4 6 2
5 6 4

0 1 2
0 2 3
1 3 5
1 4 2
2 4 5
3 4 1
3 5 2
4 5 4

2 1 2
3 1 3
4 2 5
5 2 2
5 3 5
5 4 1
6 4 2
6 5 4

5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

0
2
6
1
4
5
7
Node 1 ar, min weight = 0
Node 2 ar, min weight = 2
Node 3 ar, min weight = 4
Node 4 ar, min weight = 1
Node 5 ar, min weight = 5

*/

/*
9 14

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
0
*/
/*

#include<bits/stdc++.h>
using namespace std;
vector<int> edges[100], cost[100];
int node;
 vector<int> dijkstra(int source) {
     int INF = (int)1e9;
    vector<int> dis(node, INF);
    dis[source] = 0;
    priority_queue<int,vector<int>,greater<int> >Q;
    Q.push(source);
    while(!Q.empty()) {
    int u = Q.top();
    Q.pop();
       for (int i = 0; i < edges[u].size(); i++) {
         int v = edges[u][i];
         if (dis[v] > dis[u] + cost[u][i]) {
           dis[v] = dis[u] + cost[u][i];
            Q.push(v);
      }
    }
  }
  return dis;
}
int main()
{
int edge;
  printf("node: edge:\n");
  scanf("%d%d",&node,&edge);
    for(int i=1;i<=edge;i++)
  {
    int x,y,w;
     scanf("%d%d%d",&x,&y,&w);
   edges[x].push_back(y);
    //edges[y].push_back(x);  for bidirectional graph
       cost[x].push_back(w);
    }
    vector<int>ans;
    int source,destination;
    cin>>source;
    ans = dijkstra(source);
      for(int i=0;i<node;i++){
        cout<<ans[i];
   }
return 0;
}





#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;
 int dis[100]={0};
int main(){
    int m,s,x,y,z,n;
    cin>>n>>m>>s; //Input the number of nodes(0 based), number of edges and the source vertex.
    int G[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            if(i==j)
                G[i][j]=0;
            else
                G[i][j]=INF;
        }

    for(int i=0;i<m;i++){
        cin>>x>>y>>z; //Input the starting vertex of the edge, the ending vertex and the cost of the edge.
        G[x][y]=z;
    }
    //Code for Floyd Warshall which computes all pair shortest path.

    for(int k=0; k<n; k++)  {
        for(int i=0; i<n; i++)  {
          //for(int j=0; j<n; j++)  {
            //G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
            dis[k]=min(dis[i],dis[k]+G[k][i]);
          }
        }
  //  }
    for(int i=0;i<n;i++){
       // for(int j=0;j<n;j++)
           // cout<<G[i][j]<<" ";
        cout<<dis[i]<<" ";
        cout<<endl;
    }
    return 0;
}
/*
5 6 0
0 1 2
1 4 5
0 3 1
3 2 3
2 4 1
1 2 4
*/

