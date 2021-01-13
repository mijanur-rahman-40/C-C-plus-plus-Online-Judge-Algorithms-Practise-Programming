
#include<bits/stdc++.h>
using namespace std;
const int Max = 500005;
vector<pair<int,int> >adj[Max];
bool vis[Max] = {false};
const int INF = INT_MAX;
int dis[Max],par[Max];

bool have_dijkstra_path(int start,int node)
{
    priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > >Q;
    fill(dis, dis+node+1, INF);
    dis[start] =  0;
    par[start] =  0;
    Q.push(make_pair(dis[start],start));
    while(!Q.empty())
    {
       int u = Q.top().second;
       Q.pop();
       if(u == node){
        return true;
       }
       vis[u] = true;
       for(int i=0; i<adj[u].size(); i++)
       {
           int ver = adj[u][i].first;
           int wet = adj[u][i].second;
           if(!vis[ver] && dis[u] + wet < dis[ver])
           {
               dis[ver] = dis[u] + wet;
               par[ver] = u;
               Q.push(make_pair(dis[ver],ver));
           }
       }
    }
return false;
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
    if(have_dijkstra_path(1 , node))
    {
        vector< int >path;
        int vertex;
        for(vertex = node; vertex!= 0; vertex = par[vertex]){
            path.push_back(vertex);
        }
            reverse(path.begin(),path.end());
            cout<<path[0];
            for(int i=1; i<path.size(); i++){
               cout<<" "<<path[i];
            }
           cout<<endl;
    }
    else
        cout<<"-1"<<endl;

  return 0;
}


/*
5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

1 4 3 5


int path[100] ={0};
void print_path(int source,int n)
{
	if(n==source)
	cout<<source<<" ";

	else if(par[n]==0)
	cout<<-1;

	else
	{
	print_path(source,par[n]);
	cout<<n<<" ";
    }
}

*/





