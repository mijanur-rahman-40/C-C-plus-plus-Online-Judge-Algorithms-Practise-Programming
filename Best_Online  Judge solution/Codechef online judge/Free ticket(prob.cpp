
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
  int destination=0;
  scanf("%d%d",&node,&edge);
    for(int i=1;i<=edge;i++){
    int x,y,w;
     scanf("%d%d%d",&x,&y,&w);
      edges[x-1].push_back(y-1);
       cost[x-1].push_back(w);
       destination=max(destination,y-1);
    }
    cout<<bfs(0,destination);
return 0;
}
/*
4 5
0 1 10
0 2 24
1 2 2
1 3 15
2 3 7
0 3

4 5
1 2 10
1 3 24
2 3 2
2 4 15
3 4 7
1 4
*/
