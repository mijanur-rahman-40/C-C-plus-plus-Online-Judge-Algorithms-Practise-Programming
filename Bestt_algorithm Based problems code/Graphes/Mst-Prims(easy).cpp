







/*

#include<bits/stdc++.h>
using namespace std;
#define MX 100

typedef pair<int, int> PII;  /// dest & cost
vector<PII> v[MX];

struct node
{
    int u;
    int cost;
};

bool operator<(node a, node b)
{
    return a.cost > b.cost;
}

priority_queue<node> pq;

int cost[MX];
bool taken[MX];
int vertex, edge;

int prim(int source)
{
    for(int i = 0 ; i < vertex ; i++ )
    {
        cost[i] = INT_MAX;
        taken[i] = false;
    }

    cost[source] = 0;
    node temp;
    temp.u = source;
    temp.cost = 0;
    pq.push(temp);
    int ans = 0;

    while(!pq.empty())
    {

        node current = pq.top();
        pq.pop();
        //cout << current.u << " " << current.cost << endl;

        if(taken[current.u])
        {
            ///already taken
            continue;
        }

        taken[current.u] = true;

        ans += current.cost;

        for(int i = 0 ; i < v[current.u].size() ; i++)
        {
            if(taken[v[current.u][i].first])
            {
                continue;
            }
            if(v[current.u][i].second < cost[v[current.u][i].first])
            {

                node temp2;
                temp2.u = v[current.u][i].first;
                temp2.cost = v[current.u][i].second;
                pq.push(temp2);
                cost[v[current.u][i].first] = v[current.u][i].second;

            }

        }
    }

    return ans;
}

void printGraph()
{
    for(int i = 0 ; i < vertex ; i++)
    {
        cout << i << " -- ";
        for(int j = 0 ; j < v[i].size() ; j++)
        {
            cout << v[i][j].first << "-" << v[i][j].second << "  ";
        }
        cout <<endl;
    }
    cout <<endl;

}

int main()
{
    //freopen("kruskal.txt", "r", stdin);

    cin >> vertex >> edge;

    for(int i = 0 ; i < edge ; i++)
    {
        int source;// , dest , cost;
        PII p;
        cin >> source >> p.first >> p.second;
        v[source].push_back(p);
        int source2 = p.first;
        p.first = source;
        v[source2].push_back(p);
    }
    printGraph();
    cout << "MST IS " << prim(0) << endl;

}

*/

/*
6 8
1 2 1
1 3 1
1 5 1
2 4 3
2 5 2
3 6 2
4 6 3
5 6 5


12 17
0 1 2
0 4 3
1 2 3
1 5 1
2 3 1
2 6 2
3 7 5
4 5 4
4 8 4
5 3 6
5 9 2
6 10 4
6 7 3
7 11 3
8 9 3
9 10 3
10 11 1
*/







#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <utility>

using namespace std;
const int MAX = 1e4 + 5;
typedef pair<long long, int> PII;
bool marked[MAX];
vector <PII> adj[MAX];

long long prim(int x)
{
    priority_queue<PII, vector<PII>, greater<PII> > Q;
    int y;
    long long minimumCost = 0;
    PII p;
    Q.push(make_pair(0, x));
    while(!Q.empty())
    {
        // Select the edge with minimum weight
        p = Q.top();
        Q.pop();
        x = p.second;
        // Checking for cycle
        if(marked[x] == true)
            continue;
        minimumCost += p.first;
        marked[x] = true;
        for(int i = 0;i < adj[x].size();++i)
        {
            y = adj[x][i].second;
            if(marked[y] == false)
                Q.push(adj[x][i]);
        }
    }
    return minimumCost;
}

int main()
{
    int nodes, edges, x, y;
    long long weight, minimumCost;
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        adj[x].push_back(make_pair(weight, y));
        adj[y].push_back(make_pair(weight, x));
    }
    // Selecting 1 as the starting node
    minimumCost = prim(1);
    cout << minimumCost << endl;
    return 0;
}



// problem in code
#include<bits/stdc++.h>
using namespace std;
const int maxx = 1000;
typedef pair<int,int>pai;
bool colored[maxx];
vector<pai>Adj[maxx];
int prims(int start)
{
    priority_queue<pai,vector<pai>,greater<pai> >Q;
    int minimumCost = 0;
    Q.push(make_pair(start,0));
    while(!Q.empty())
    {
        int u = Q.top().first;
        int w = Q.top().second;
        Q.pop();
        if(colored[u] == true)
        {
            continue;
        }
        minimumCost += w;
        colored[u] = true;
        for(int i=0; i<Adj[u].size(); i++){
            int v = Adj[u][i].first;
            int cost = Adj[u][i].second;
            if(colored[v] == false)
            {
                Q.push(make_pair( Adj[u][i]);
            }
        }
    }
    return minimumCost;
}
int main()
{
    int nodes,edges;
    scanf("%d%d",&nodes,&edges);
    for(int i=0; i<edges; i++){
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);
        Adj[u].push_back(make_pair(v,w));
        Adj[v].push_back(make_pair(u,w));
    }
        cout<<"Minimum cost is : "<<prims(0)<<endl;
}


