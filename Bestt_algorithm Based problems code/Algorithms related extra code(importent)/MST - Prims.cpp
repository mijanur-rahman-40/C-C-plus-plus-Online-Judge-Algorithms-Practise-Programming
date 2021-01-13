#include<iostream>
#include<vector>
#include<queue>
#define sz 200005
using namespace std;

vector<int>adj[sz],cost[sz];
int col[sz];

priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;

int prims(int st)
{
    for (int i = 0; i<adj[st].size(); i++)
        pq.push({cost[st][i], {st,adj[st][i]}});
    vector<pair<int,pair<int,int>>>ans;
    col[st]=1;
    int c, u, v, tot=0;
    while(!pq.empty())
    {
        c = pq.top().first;
        u = pq.top().second.first;
        v = pq.top().second.second;
        pq.pop();
        if(!col[u] || !col[v])
        {
            ans.push_back( {c, {u,v} } );
            tot+=c;
            u = col[u]?v:u;
            col[u]=1;
            for (int i = 0; i<adj[u].size(); i++)
            {
                if(! col[ adj[u][i] ])
                    pq.push({cost[u][i],{u,adj[u][i]}});
            }
        }
    }

    for (int i = 0; i<ans.size(); i++)
    {
        cout<<i<<":"<<ans[i].first<<" -> ("<<ans[i].second.first << "," <<ans[i].second.second << ")"<<endl;
    }
    return tot;
}
int main()
{
    int cas = 1,st,n,m,x,y,z;
    cin>>n>>m;
    for (int i = 0; i<m; i++)
    {
        cin>>x>>y>>z;
        adj[x].push_back(y);
        cost[x].push_back(z);
        adj[y].push_back(x);
        cost[y].push_back(z);
    }
    cin>>st;
    cout<<"Total Cost of MST = "<<prims(st)<<"\n";
    return 0;
}
/* Sample Input -
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


//http://www.codingalpha.com/prims-algorithm-c-program/
