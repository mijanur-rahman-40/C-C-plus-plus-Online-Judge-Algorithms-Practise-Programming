
#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > Adj(1000);
int edge;
int vis[100][100],dis[1000];
int dx[]={0,0,-1,+1,-1,+1,-1,+1};
 int dy[]={1,-1,0,0,-1,+1,+1,-1};
bool is_ongrid(int x,int y)
{
     return (x>m || x<1 || y>n || y<1);
}
void BFS(int x,int y)
{
     vis[x][y]=1;
     dis[x][y]=0;
     queue<pair<int,int> >Q;
     Q.push(make_pair(x,y));
     while(!Q.empty())
     {
         pair<int, int>u=Q.front();
          //cout<<u;
          Q.pop();
          for(int i=0;i<8;i++){
            int now_x=u.first+dx[i];
            int now_y=u.second+dy[i];
            if(!is_ongrid(now_x,now_y))
            {
                 vis[now_x][now_y]=1;
                 dis[now_x][now_y]=dis[u.first][u.second]+1;
                 Q.push(dis[v]);
            }

int main()
{
     int node,root;
	cin>>node>>edge;
	printf("Starting node: ");
        cin>>root;
	for(int i=0;i<edge;i++){
		int u,v;
		cin>>u>>v;
		Adj[u].push_back(v);
	}

	BFS(Adj,root);

	return 0;
}
*/


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
    //Graph[b].edges.push_back(a);
}
for(int i = 0;i < n; i++){
    Graph[i].visited = false;
}

int s,t;
cin >> s >> t;

cout << BFS(Graph,s,t);

  }
