

/*
//Implementation for Dijkstra's SSSP(Single source shortest path) algorithm
//This is an optimized algorithm running in O(E*log(V))

#include <iostream>
#include <queue>
#include <vector>
#include <climits>
using namespace std;
#define INF INT_MAX //Infinity

const int sz=10001; //Maximum possible number of vertices. Preallocating space for DataStructures accordingly
vector<pair<int,int> > a[sz]; //Adjacency list
int dis[sz]; //Stores shortest distance
bool vis[sz]={0}; //Determines whether the node has been visited or not

void Dijkstra(int source, int n) //Algorithm for SSSP
{
    for(int i=0;i<sz;i++) //Set initial distances to Infinity
        dis[i]=INF;
    //Custom Comparator for Determining priority for priority queue (shortest edge comes first)
    class prioritize{public: bool operator ()(pair<int, int>&p1 ,pair<int, int>&p2){return p1.second>p2.second;}};
    priority_queue<pair<int,int> ,vector<pair<int,int> >, prioritize> pq; //Priority queue to store vertex,weight pairs
    pq.push(make_pair(source,dis[source]=0)); //Pushing the source with distance from itself as 0
    while(!pq.empty())
    {
        pair<int, int> curr=pq.top(); //Current vertex. The shortest distance for this has been found
        pq.pop();
        int cv=curr.first,cw=curr.second; //'cw' the final shortest distance for this vertex
        if(vis[cv]) //If the vertex is already visited, no point in exploring adjacent vertices
            continue;
        vis[cv]=true;
        for(int i=0;i<a[cv].size();i++) //Iterating through all adjacent vertices
            if(!vis[a[cv][i].first] && a[cv][i].second+cw<dis[a[cv][i].first]) //If this node is not visited and the current parent node distance+distance from there to this node is shorted than the initial distace set to this node, update it
                pq.push(make_pair(a[cv][i].first,(dis[a[cv][i].first]=a[cv][i].second+cw))); //Set the new distance and add to priority queue
    }
}

int main() //Driver Function for Dijkstra SSSP
{
    int n,m,x,y,w;//Number of vertices and edges
    //cout<<"Enter number of vertices and edges in the graph\n";
    cin>>n>>m;
    for(int i=0;i<m;i++) //Building Graph
    {
        cin>>x>>y>>w; //Vertex1, Vertex2, weight of edge
        a[x].push_back(make_pair(y,w));
        a[y].push_back(make_pair(x,w));
    }
    //cout<<"Enter source for Dijkstra's SSSP algorithm\n";
    int source;
    cin>>source;
    Dijkstra(source,n);//SSSP from source (Also passing number of vertices as parameter)
    cout<<"Source is: "<<source<<". The shortest distance to every other vertex from here is: \n";
    for(int i=1;i<=n;i++)//Printing final shortest distances from source
    {
        cout<<"Vertex: "<<i<<" , Distance: ";
        dis[i]!=INF? cout<<dis[i]<<"\n" : cout<<"-1\n";
    }
    return 0;
}



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
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>Q;
    int node;
    cin>>node;
    vector<pair<int,int> >Adj[node+1];
    int edge,u,v,w;
    cin>>edge;
    for(int i=0;i<edge;i++){
        cin>>u>>v>>w;
        Adj[u].push_back(make_pair(v,w));
        //G[v].push_back(make_pair(u,w));
    }
    int source;
    cin>>source;
    int dis[node+1];
    dis[source] =0;
    Q.push(make_pair(source,dis[source]));
    while(!Q.empty()){
        u =Q.top().first;
        Q.pop();
        int size =Adj[u].size();
        for(int i = 0 ; i<size; i++){
            v = Adj[u][i].first;
            w = Adj[u][i].second;
           // cout<<u<<" "<<v<<" "<<w<<endl;
            if(dis[v] > dis[u] + w){
                dis[v] = dis[u] + w;
                Q.push(make_pair(v,dis[v]));
            }
        }
    }
    for(int i=1; i<=node; i++){
        printf("Node %d ar, min weight = %d\n", i, dis[i]);
    }
    return 0;
}
/*
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

2 1 2
3 1 3
4 2 5
5 2 2
5 3 5
5 4 1
6 4 2
6 5 4

Node 1, min weight = 0
Node 2, min weight = 2
Node 3, min weight = 3
Node 4, min weight = 5
Node 5, min weight = 4
Node 6, min weight = 7

*/


/*

#include<bits/stdc++.h>
using namespace std;
vector<pair<long long,long> > adjmat[300007];
long wt[300007],u,par[300007];
bool vis[300007];
long long dist[3000007],inf=1000000000000000000;
priority_queue< pair<long long,long>,vector< pair<long long,long> >,greater< pair<long long,long> > >pq;
int main()
{
long i,j,k,l,m,n;
scanf("%ld%ld",&n,&m);
for(i=1;i<=m;i++)
{
scanf("%ld%ld%ld",&j,&k,&wt[i]);
adjmat[j].push_back(pair<long long,int>(k,i));
adjmat[k].push_back(pair<long long ,int>(j,i));
}
scanf("%ld",&u);


for(i=1;i<=n;i++)
{
vis[i]=false;
dist[i]=inf;
}
pq.push(make_pair(0,u));
dist[u]=0;
while(!pq.empty())
{
long g,a,b;
g = pq.top().second;
pq.pop();
if(vis[g]==true)
{
continue;
}
vis[g]=true;
	for(i=0;i<adjmat[g].size();i++)
	{
	a=adjmat[g][i].first;b=adjmat[g][i].second;
	if(dist[a]>dist[g]+wt[b])
	{
	dist[a]=dist[g]+wt[b];
	pq.push(make_pair(dist[a],a));
	par[a]=b;//edge no b is included
	}
	else if(dist[a]==dist[g]+wt[b]&&wt[par[a]]>wt[b])
	{//new egde has even lesser wt so , reject older one n add new edge no.
	par[a]=b;
	}
	}
}
//printf("%ld\n",par[u]);
par[u]=0;
long long sum= 0;
for(i=1;i<=n;i++)
sum+=wt[par[i]];
cout<<sum<<endl;
//printf("%lld\n",sum);
//included edges are
for(i=1;i<=n;i++)
{
if(i!=u)
printf("%ld ",par[i]);
}
printf("\n");
return 0;
}
*/
