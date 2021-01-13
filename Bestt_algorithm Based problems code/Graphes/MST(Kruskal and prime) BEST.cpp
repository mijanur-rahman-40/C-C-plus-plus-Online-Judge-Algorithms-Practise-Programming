
#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;
typedef pair<int,int>PII;
bool marked[MAX];
vector<PII>adj[MAX];
int prim(int start)
{
    priority_queue<PII,vector<PII>,greater<PII> > Q;
    int minimumCost = 0;
    PII p;
    Q.push(make_pair(0, start));
    while(!Q.empty())
    {
        // Select the edge with minimum weight
        p = Q.top();
        Q.pop();
        int  u = p.second;
        // Checking for cycle
        if(marked[u] == true){
            continue;
        }
        minimumCost += p.first;
        marked[u] = true;
        for(int i = 0;i < adj[u].size();++i)
        {
           int v = adj[u][i].second;
            if(marked[v] == false)
                Q.push(adj[u][i]);
        }
    }
    return minimumCost;
}

int main()
{
    int nodes,edges, x,y,weight;
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        adj[x].push_back(make_pair(weight, y));
        adj[y].push_back(make_pair(weight, x));
    }
    // Selecting 1 as the starting node
    cout << "minimumCost is : "  <<prim(0)<<endl;
    return 0;
}



/*
#include<bits/stdc++.h>
using namespace std;
int nodes,edges;
vector<pair<int,pair<int,int> > >graph;
vector< pair<int,int> >mst;
int root(int node,int parent[])
{
    while( node != parent[node])
    {
        node = parent[node];
    }
    return node;
}
int kruskal()
{
    int parent[100];
    for(int i=0; i<nodes; i++){
        parent[i] = i;
    }
    int cost = 0,u,v,ru,rv;j = 0;
    sort(graph.begin(),graph.end());
    for(int i=0; i<graph.size(); i++){
         u = graph[i].second.first;
         v = graph[i].second.second;
        ru = root(u,parent);
        rv = root(v,parent);
       // cout<<"u  ru : "<<u<<" "<<ru<<"  v  rv : "<<v<<" "<<rv<<endl;
        // check if graph contains  cycle
        if(ru != rv)
        {
            parent[ru] = parent[rv];
            cost +=  graph[i].first;
            mst.push_back(make_pair(u,v));

        }
    }
    return cost;
}
int main()
{
    scanf("%d%d",&nodes,&edges);
    for(int i =0; i<edges; i++){
            int u,v,w;
      scanf("%d%d%d",&u,&v,&w);
        graph.push_back(make_pair(w,make_pair(u,v)));
    }
    printf("Minimum cost is : %d\n",kruskal());
    cout<<"The eligible nodes are: "<<endl;
     for(int i=0; i<mst.size(); i++){
        cout<<mst[i].first<<" "<<mst[i].second<<endl;
     }
}

*/
