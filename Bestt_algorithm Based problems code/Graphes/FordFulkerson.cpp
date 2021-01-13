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

/*
6
0  16 13 0  0  0
0  0  10 12 0  0
0  4  0  0  14 0
0  0  9  0  0  20
0  0  0  7  0  4
0  0  0  0  0  0
0 5



5
0 2 3 0 0
0 0 0 0 3
0 1 0 1 0
0 0 0 0 3
0 0 0 0 0
0 4


index : 4 1 Path : 3
index : 1 0 Path : 2
step : 1
mat1[1][4] : 1
mat2[4][1] : 2
mat1[0][1] : 0
mat2[1][0] : 2
index : 4 1 Path : 1
index : 1 2 Path : 1
index : 2 0 Path : 3
step : 2
mat1[1][4] : 0
mat2[4][1] : 3
mat1[2][1] : 0
mat2[1][2] : 1
mat1[0][2] : 2
mat2[2][0] : 1
index : 4 3 Path : 3
index : 3 2 Path : 1
index : 2 0 Path : 2
step : 3
mat1[3][4] : 2
mat2[4][3] : 1
mat1[2][3] : 0
mat2[3][2] : 1
mat1[0][2] : 1
mat2[2][0] : 2
Maximum Flow: 4
*/

/*
#include<bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> capacity;
vector<vector<int>> adj;
int INF = 100000;
int bfs(int s, int t, vector<int>& parent) {
    fill(parent.begin(), parent.end(), -1);
    parent[s] = -2;
    queue<pair<int, int>> q;
    q.push({s, INF});

    while (!q.empty()) {
        int cur = q.front().first;
        int flow = q.front().second;
        q.pop();

        for (int next : adj[cur]) {
            if (parent[next] == -1 && capacity[cur][next]) {
                parent[next] = cur;
                int new_flow = min(flow, capacity[cur][next]);
                if (next == t)
                    return new_flow;
                q.push({next, new_flow});
            }
        }
    }

    return 0;
}

int maxflow(int s, int t) {
    int flow = 0;
    vector<int> parent(n);
    int new_flow;

    while (new_flow = bfs(s, t, parent)) {
        flow += new_flow;
        int cur = t;
        while (cur != s) {
            int prev = parent[cur];
            capacity[prev][cur] -= new_flow;
            capacity[cur][prev] += new_flow;
            cur = prev;
        }
    }

    return flow;
}
int main()
{
    int source,n,target;
    cin>>n;
    for(int i=0; i<6; i++){
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);
        use 2d vector
      //  adj[u].push_back(v);
       // capacity[u].push_back(w);
    }
    scanf("%d%d",&source,&target);
    cout<<"Maximum flow is : "<<maxflow(source,target)<<endl;
}
*/
