//Adjacency matrix
//for undirected



/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t_node,node1,node2,edge;
     int Adjmat[100][100]={0};
     cin>>t_node;
     //>>edge;
     while(cin>>node1>>node2){
     //for(int i=0;i<edge;i++){
               //cin>>node1>>node2;
          Adjmat[node1][node2]=1;
     }
     for(int i=0;i<t_node;i++){
          for(int j=0;j<t_node;j++){
               printf("%d ",Adjmat[i][j]);
          }
          printf("\n");
     }
     return 0;
}

n=6  e=12
1 2
1 3
2 1
2 4
3 1
3 4
4 2
4 3
4 5
5 4
5 6
6 5
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t_node,node1,node2;
     int Adjmat[100][100]={0};
     cin>>t_node;
     while(cin>>node1>>node2){
          Adjmat[node1][node2]=1;
     }
     for(int i=1;i<=t_node;i++){
          for(int j=1;j<=t_node;j++){
               printf("%d ",Adjmat[i][j]);
          }
          printf("\n");
     }
     return 0;
}
/*
5
1 2
1 3
1 4
2 3
3 2
4 4
5 2
*/
/*
//for directed weted graph
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t_node,node1,node2,wet;
     int Adjmat[100][100]={0};
     cin>>t_node;
     while(cin>>node1>>node2>>wet){
          Adjmat[node1][node2]=wet;
     }
     for(int i=1;i<=t_node;i++){
          for(int j=1;j<=t_node;j++){
               printf("%d ",Adjmat[i][j]);
          }
          printf("\n");
     }
     return 0;
}

5
1 2 5
1 3 4
1 4 6
2 3 8
3 2 9
4 4 1
5 2 3
*/










//BFS

/*
#include<bits/stdc++.h>
using namespace std;
//#define MAX_SZ 100
const int MAX_SZ=100;
//#define Q_SZ 1000
const int Q_SZ=1000;
int mat[MAX_SZ][MAX_SZ]={0}, color[MAX_SZ]={0};// Q[Q_SZ], frnt = -1, rear = -1;
queue<int>Q;
/*void enqueue(int item)
{
     rear++;
    Q[rear] = item;
}
int dequeue()
{ int p;
     frnt++;
     p=Q[frnt];
    return p;
}
bool isEmpty()
{
    if(frnt == rear)
        return true;
    return false;
}

void bfs(int v, int e, int s)
{
    int current, i;
    //enqueue(s);
    Q.push(s);
    color[s] = 1;
    while(!Q.empty())
    {
       // current = dequeue();
       current=Q.front();
       Q.pop();
        for(i=0;i<v;i++)
        {
            if(mat[current][i] == 1 && color[i] == 0)
            {
                Q.push(i);
                //enqueue(i);
                color[i] = 1;
            }
        }
        printf("%d ", current);
        //color[current] = 2;
    }

  0 1 2 3 4 5
0 0 1 0 1 0 0
1 1 0 1 1 0 0
2 0 1 0 0 0 1
3 1 1 0 0 0 1
4 0 0 0 0 0 1
5 0 0 1 1 1 0

}
int main()
{
    int i, j, v, e, a, b, start;
    printf("Total Vertices:");
    scanf("%d", &v);
    printf("Total Edges:");
    scanf("%d", &e);
    /*
    for(i=0;i<v;i++){
        for(j=0;j<v;j++)
            mat[i][j] = 0;
    }
    for(i=0;i<v;i++){
        color[i] = 0;
    }

    for(i=0;i<e;i++)
    {
        scanf("%d %d", &a, &b);
        mat[a][b] = 1;
        mat[b][a] = 1;
    }
    printf("Starting node: ");
    scanf("%d", &start);
    bfs(v, e, start);
    return 0;
}
*/










//DFS

/*
#include<bits/stdc++.h>
using namespace std;
#define MAX_SZ 100
stack<int>st;
int mat[MAX_SZ][MAX_SZ]={0}, color[MAX_SZ]={0}, STK[MAX_SZ], top = -1;

void push(int item)
{
     top++;
    STK[top] = item;
}
int pop()
{
     int p=STK[top];
     top--;
       return p;
}
bool isEmpty()
{
    if(top == -1)
        return true;
    return false;
}


void dfs(int v, int e, int s)
{
    int current, i;
    st.push(s);
    color[s] = 1;
    while(!st.empty()){
        current = st.top();
        st.pop();
        //printf("%d",current);
        for(i=0;i<v;i++){
            if(mat[current][i] == 1 && color[i] == 0)
            {
                st.push(i);
                color[i] = 1;
            }
        }
        printf("%d ", current);

/*
  0 1 2 3 4 5
0 0 1 0 1 0 0
1 1 0 1 1 0 0
2 0 1 0 0 0 1
3 1 1 0 0 0 1
4 0 0 0 0 0 1
5 0 0 1 1 1 0

        color[current] = 2;
    }
}
int main()
{
    int i, j, v, e, a, b, start;
    printf("Total Vertices:");
    scanf("%d", &v);
    printf("Total Edges:");
    scanf("%d", &e);
    /*
    for(i=0;i<v;i++){
        for(j=0;j<v;j++){
            mat[i][j] = 0;
        }
    }
    for(i=0;i<v;i++){
        color[i] = 0;
    }*/
    /*
    for(i=0;i<e;i++)
    {
        scanf("%d %d", &a, &b);
        mat[a][b] = 1;
        mat[b][a] = 1;
    }
    printf("Starting node: ");
    scanf("%d", &start);
    dfs(v, e, start);
    return 0;
}
*/
/*
1 2
1 3
2 4
4 3
3 2
for input
0 1
0 3
1 3
1 2
3 5
2 5
5 4
for adjmat
0 1
1 0
0 3
3 0
1 3
3 1
1 2
2 1
3 5
5 3
2 5
5 2
5 4
4 5
ans Starting node: 1
 1 3 5 4 2 0


0 1 0 1 0 0
1 0 1 1 0 0
0 1 0 0 0 1
1 1 0 0 0 1
0 0 0 0 0 1
0 0 1 1 1 0
*/






//Dijkstra
/*
#include<bits/stdc++.h>
using namespace std;
const int Max = 500005;
vector<pair<int,int> >adj[Max];
bool vis[Max] = {false};
const int INF = INT_MAX;
int dis[Max];
void dijkstra_path(int start,int node)
{
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >Q;
    fill(dis, dis+node+1, INF);
    dis[start] =  0;
    Q.push(make_pair(dis[start],start));
    while(!Q.empty())
    {
       int u = Q.top().second;
       Q.pop();
       for(int i=0; i<adj[u].size(); i++)
       {
           int ver = adj[u][i].first;
           int wet = adj[u][i].second;
           if(!vis[ver] && dis[u] + wet < dis[ver])
           {
               dis[ver] = dis[u] + wet;
               Q.push(make_pair(dis[ver],ver));
           }
       }
    }
    for(int i=0; i<node; i++){
        cout<<dis[i]<<" ";
    }
}
int main()
{
    int node,edge;
    scanf("%d%d",&node,&edge);
    for(int i=0; i<edge; i++)
    {
        int u,v,wet;
        scanf("%d%d%d",&u,&v,&wet);
        adj[u].push_back(make_pair(v,wet));
        adj[v].push_back(make_pair(u,wet));
    }
    int start;
    cout<<"Starting node : ";
    cin>>start;
    dijkstra_path(start , node);
  return 0;
}
*/







//Bellman Ford

/*
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
    for(i=0;i<=n-1;i++){
        for(u=0;u<n;u++){
            for(v=0;v<n;v++){
                if(mat[u][v] != 0)
                {
                    if(dist[u] != INF && mat[u][v] + dist[u] < dist[v])
                        dist[v] = mat[u][v] + dist[u];
                }
            }
        }
    }
    bool flag = false;
    for(u=0;u<n;u++){
        for(v=0;v<n;v++){
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
*/







/*
//Floyd Warshall

#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

int main(){
    int m,s,x,y,z,n;
    cin>>n>>m>>s; //Input the number of nodes(0 based), number of edges and the source vertex.
    int G[n][n];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            if(i==j)
                G[i][j]=0;
            else
                G[i][j]=INF;
        }

    for(int i=0;i<m;i++){
        cin>>x>>y>>z; //Input the starting vertex of the edge, the ending vertex and the cost of the edge.
        G[x-1][y-1]=z;
        G[y-1][x-1]=z;
    }
    //Code for Floyd Warshall which computes all pair shortest path.
    for(int k=0; k<n; k++)  {
        for(int i=0; i<n; i++)  {
          for(int j=0; j<n; j++)  {
            G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
          }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<G[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
*/
/*
5 6 0
0 1 2
1 4 5
0 3 1
3 2 3
2 4 1
1 2 4


*/





/*
#include<bits/stdc++.h>
using namespace std;
#define sz 100
#define INF 9999999
int mat[sz][sz];
bool bfs(int s, int t, int n, int p[]){
    bool visited[n];
    int v;
    queue<int>q;
    memset(visited, false, sizeof(visited));
    visited[s] = 0;
    //p[s] = -1;
    q.push(s);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(v=0;v<n;v++)
        {
            if(visited[v] == false && mat[u][v] > 0)
            {
                q.push(v);
                p[v] = u;
                visited[v] = true;
            }
        }
    }
    if(visited[t] == true)
        return true;
    return false;
}
int FordFulkerson(int source, int target, int nodes)
{
    int max_flow = 0, i, j,k=1;
    int parent[nodes];
    while(bfs(source, target, nodes, parent))
    {
        int path_flow = INF;
        //calculate minimum possible flow
        i=target;
        for(; i!=source; i=parent[i]){
            j = parent[i];
            cout<<"index : "<<i<<" "<<j<<" Path : "<<mat[j][i]<<endl;
            path_flow = min(path_flow, mat[j][i]);
        }
        cout<<"step : "<<k++<<endl;
        //eliminate and add reverse path
        for(i=target; i!=source; i=parent[i]){
            j = parent[i];
            mat[j][i] -= path_flow;
            mat[i][j] += path_flow;
            cout<<"mat1["<<j<<"]["<<i<<"] : "<<mat[j][i]<<endl;
            cout<<"mat2["<<i<<"]["<<j<<"] : "<<mat[i][j]<<endl;
        }
        max_flow += path_flow;
    }
    return max_flow;
}
int main(){
    int i, j, v, s, t, d;
    cin>>v;
    for(i=0;i<v;i++)
        for(j=0;j<v;j++)
            mat[i][j] = 0;
    for(i=0;i<v;i++){
        for(j=0;j<v;j++)
            cin>>mat[i][j];
    }
    cin>>s>>t;
    cout<<"Maximum Flow: "<<FordFulkerson(s, t, v)<<endl;
    return 0;
}

*/





/*
//FordFulkerson
#include<bits/stdc++.h>
using namespace std;
#define sz 100
int mat[sz][sz];
int vis[sz];
bool DFS(int s,int t,int v,int p[])
{
   memset(vis,false,sizeof(vis));
   stack<int>st;
   vis[s] = 0;
   st.push(s);
   while(!st.empty()){
       int u = st.top();
       st.pop();
       for(int i=0; i<v; i++){
         if(vis[i] == false && mat[u][i]>0)
         {
             vis[i] = true;
             p[i] = u;
             st.push(i);
         }
       }
   }
   if(vis[t] == true)
    return  true;
    else
        return false;
}

int maxflow(int source,int target,int vertex)
{
    int parent[vertex];
    int max_flow = 0;
    while(DFS(source,target,vertex,parent))
    {
      int  path_flow = 100000;
      int i = target;
      for(; i!=source; i=parent[i]){
          int j = parent[i];
          path_flow = min(path_flow,mat[j][i]);
      }
      i = target;
      for(; i!=source; i=parent[i]){
          int j = parent[i];
          mat[j][i] = mat[j][i] - path_flow;
          mat[i][j] = mat[i][j] + path_flow;
      }
      max_flow = max_flow + path_flow;
    }
    return max_flow;
}
int main()
{
    int source,target,vertex;
    scanf("%d",&vertex);
    memset(mat,0,sizeof(mat));
    for(int i=0; i<vertex; i++){
        for(int j=0; j<vertex; j++){
            scanf("%d",&mat[i][j]);
        }
    }
    scanf("%d%d",&source,&target);
    cout<<"Maximum flow is : "<<maxflow(source,target,vertex)<<endl;
}


*/


//Top sort

/*

#include<iostream>
#include<queue>

using namespace std;

int mat[100][100],visited[100],indeg[100],n,e;
queue<int> q;

void topologicalsort()
{
    int cnt,cur;
    for(int i=0;i<n;++i)
    {
        if(indeg[i]==0)
            q.push(i);
    }
    cnt=0;
    while(!q.empty()&&cnt<n)
    {
        cur=q.front();
        q.pop();
        visited[cur]=1;
        cout<<cur<<" ";
        for(int i=0;i<n;++i)
        {
            if(mat[cur][i] && visited[i]==0)
            {
                indeg[i]--;
                if(indeg[i]==0)
                    q.push(i);
            }
        }
        cnt++;
    }
}

int main()
{
    cin>>n>>e;
    for(int i=0; i<n; ++i)
    {
        visited[i]=0;
        indeg[i]=0;
    }
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            mat[i][j]=0;
        }
    }
    for(int i=0; i<e; ++i)
    {
        int a,b;
        cin>>a>>b;
        mat[a][b]=1;
        indeg[b]++;
    }
    topologicalsort();
    return 0;
}






#include<iostream>

using namespace std;

int mat[100][100],visited[100],n,e,k,st[100],fn[100];

void DFS(int cur)
{
    int i;
    visited[cur]=i;
    for(i=0; i<n; ++i)
    {
        if(mat[cur][i]&&visited[i]==0)
        {
            st[i]=++k;
            DFS(i);
            fn[i]==++k;
        }
    }
}

void topologicalsort()
{
    int ind[100];
    for(int i=0; i<n; ++i)
    {
        ind[i]=i;
    }
    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            if(fn[i]<fn[j])
            {
                int temp;
                temp=st[i];
                st[i]=st[j];
                st[j]=temp;

                temp=fn[i];
                fn[i]=fn[j];
                fn[j]=temp;

                temp=ind[i];
                ind[i]=ind[j];
                ind[j]=temp;
            }

        }
    }
    for(int i=0; i<n; ++i)
    {
        cout<<ind[i]<<" ";
    }
}

int main()
{
    cin>>n>>e;
    for(int i=0; i<n; ++i)
    {
        visited[i]=0;

    }
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<n; ++j)
        {
            mat[i][j]=0;
        }
    }
    for(int i=0; i<e; ++i)
    {
        int a,b;
        cin>>a>>b;
        mat[a][b]=1;
    }
    k=0;
    st[1]=++k;
    DFS(1);
    fn[1]=++k;
    topologicalsort();
    return 0;
}

*/
/*
6 7

0 1
0 2
0 4
4 5
4 3
3 1
5 2
*/

