
/**
6 8
1 2 1
1 3 1
1 5 1
2 4 3
2 5 2
3 6 2
4 6 3
5 6 5
1
*/
// UVa - 544,908,10034,11228,10462, SPOJ-MST

#include <bits/stdc++.h>
using namespace std;

#define sz 100000
vector<int> adj[sz], cost[sz];
int par[sz], col[sz];

priority_queue< pair<int, pair<int,int> >,
                vector< pair<int, pair<int,int> > >,
                greater< pair<int, pair<int,int> > > > pq;

int prims(int st)
{
    for(int i = 0; i < adj[st].size(); i++)
        pq.push( {cost[st][i], {st, adj[st][i]} } );
    col[st] = 1;

    int total = 0;
    vector< pair< int, pair<int,int> > > ans;
    while(!pq.empty())
    {
        int c,u,v;
        c = pq.top().first;
        u = pq.top().second.first;
        v = pq.top().second.second;
        pq.pop();
        if(!col[u] || !col[v])
        {
            ans.push_back( {c, {u,v} } );
            total += c;
            u = !col[u] ? u : v;
            for(int i=0; i<adj[u].size(); i++)
            {
                if(!col[ adj[u][i] ])
                    pq.push( {cost[u][i], {u,adj[u][i]} } );
            }

            col[u] = 1;
        }
    }

    for(int i=0; i<ans.size(); i++)
        cout << i << ":" << ans[i].first << " -> (" << ans[i].second.first <<
                "," << ans[i].second.second << ")\n";
    return total;
}

int main()
{
   int n,m;
   cin >> n >> m;
   for(int i=0; i<m; i++){
        int u,v,w;
        cin >> u >> v >> w;
        adj[u].push_back(v);
        cost[u].push_back(w);
        adj[v].push_back(u);
        cost[v].push_back(w);
   }

   int st;
   cin >> st;

   cout << "MST Answer: " << prims(st) << endl;
}

