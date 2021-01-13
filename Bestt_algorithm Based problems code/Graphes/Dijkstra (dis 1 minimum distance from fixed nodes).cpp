//wet constent
//for every node
/*
#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > Adj(1000);
int node,edge;
int vis[100];

void BFS(int start)
{
     int INF = (int)1e9;
    vector<int> dis(node, INF);
     vis[start]=1;
     dis[start]=0;
     queue<int>Q;
     Q.push(start);
     while(!Q.empty())
     {
          int u=Q.front();
          Q.pop();
          for(int i=0;i<Adj[u].size();i++){
            int v=Adj[u][i];
            if(!vis[v])
            {
                 vis[v]=1;
                 if (dis[v] > dis[u] + 1) {
                dis[v] = dis[u] + 1;
                Q.push(v);
            }
          }
          }
     }
    for(int i=0;i<node;i++){
          cout<<dis[i];
	}
	cout<<endl;
}
int main()
{
     int root;
	cin>>node>>edge;
	for(int i=0;i<edge;i++){
		int u,v;
		cin>>u>>v;
		Adj[u].push_back(v);
	}
	printf("Starting node: ");
   int source,destination;
    cin>>source;
    BFS(source);
	return 0;
}
*/

//for fixed node
#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > Adj(1000);
int node,edge;
vector<int>ver;
int vis[100];
int  BFS(int start,int destination)
{
     int INF = (int)1e9;
    vector<int> dis(node, INF);
     vis[start]=1;
     dis[start]=0;
     queue<int>Q;
     Q.push(start);
     while(!Q.empty())
     {
          int u=Q.front();
          Q.pop();
          for(int i=0;i<Adj[u].size();i++){
            int v=Adj[u][i];
            if(!vis[v])
            {
                 vis[v]=1;
                 if (dis[v] > dis[u] + 1) {
                dis[v] = dis[u] + 1;
                Q.push(v);
                ver.push_back(v);
            }
           }
          }
       }
    return dis[destination];
}
int main()
{
	cin>>node>>edge;
	for(int i=0;i<edge;i++){
		int u,v;
		cin>>u>>v;
		Adj[u].push_back(v);
	}
	printf("Starting node and destination: ");
   int source,destination;
    cin>>source>>destination;
    cout<<BFS(source,destination);
    for(int i=0; i<ver.size(); i++){
        cout<<ver[i]<<" ";
    }
	return 0;
}




/*
5 8
0 1
0 2
0 3
1 4
1 2
2 3
3 4
2 4
*/


/*
0 1
0 2
0 3
2 3
3 1
*/


//for every nodes
/*
#include<bits/stdc++.h>
using namespace std;
vector<int> edges[100], cost[100];
int node;
 vector<int> bfs(int source) {
     int INF = (int)1e9;
    vector<int> dis(node, INF);
    dis[source] = 0;
  queue<int>Q;
  Q.push(source);
  while(!Q.empty()) {
    int u = Q.front();
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
    ans=bfs(source);
for(int i=0;i<node;i++){
     cout<<ans[i];
}
return 0;
}
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
//Fixed node

#include<bits/stdc++.h>
using namespace std;
vector<int> edges[100], cost[100];
int node;
int bfs(int source, int destination) {
  int INF = (int)1e9;
    vector<int> dis(node, INF);
    dis[source] = 0;
  queue<int>Q;
  Q.push(source);
  while(!Q.empty()) {
    int u = Q.front();
    Q.pop();
    for (int i = 0; i < edges[u].size(); i++) {
      int v = edges[u][i];
      if (dis[v] > dis[u] + cost[u][i]) {
        dis[v] = dis[u] + cost[u][i];
        Q.push(v);
      }
    }
  }
  return dis[destination];
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
    cin>>source>>destination;
    cout<<bfs(source,destination);
return 0;
}

*/

/*
#include <iostream>
#include <deque>
#include <vector>

using namespace std;

struct vertex{
vector<int> edges;
bool visited;
};

int dist = 0;

int BFS(vertex Graph[],int v,int target){
deque<int> Q;
Q.push_front(v);
Graph[v].visited = true;
    while(!Q.empty()){
        int t = Q.back();
        Q.pop_back();
            if(t == target){
                return t;
            }
            for(unsigned int i = 0;i < Graph[t].edges.size();i++){
                int u = Graph[t].edges[i];
                if(!Graph[u].visited){
                    Graph[u].visited = true;
                    Q.push_front(u);
                }
            }
    }
    return -1;
}

int main(){
int n;
cin >> n;
vertex Graph[n];
int k;
cin >> k;
for(int i = 0;i < k; i++){
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    Graph[a].edges.push_back(b);
    Graph[b].edges.push_back(a);
}

for(int i = 0;i < n; i++){
    Graph[i].visited = false;
}

int s,t;
cin >> s >> t;

cout << BFS(Graph,s,t);

  }

*/
/*
5 8
0 1 -1
0 2 3
0 3 6
1 4 -5
1 2 1
2 3 2
3 4 1
2 4 2

5 8
0 1 1
0 2 3
0 3 6
1 4 5
1 2 1
2 3 2
3 4 1
2 4 2
*/
