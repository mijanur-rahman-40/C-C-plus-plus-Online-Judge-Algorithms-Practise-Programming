
#include<bits/stdc++.h>
using namespace std;
vector< vector<int> > Adj(1000);
int edge;
int vis[100][100],dis[1000];
int dx[]={0,0,-1,+1,-1,+1,-1,+1},dy[]={1,-1,0,0,-1,+1,+1,-1};
void BFS(int x,int y)
{
     vis[x][y]=1;
     dis[x][y]=0;
     queue<int>Q;
     Q.push(start);
     while(!Q.empty())
     {
          int u=Q.front();
          //cout<<u;
          Q.pop();
          for(int i=0;i<Adj[u].size();i++){
            int v=Adj[u][i];
            if(!vis[v])
            {
                 vis[v]=1;
                 dis[v]=dis[u]+1;
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



