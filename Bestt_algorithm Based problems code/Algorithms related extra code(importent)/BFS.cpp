#include<iostream>
#include<vector>
#include<queue>
#define maxn 1000

using namespace std;

bool vis[maxn];
vector<int>adj[maxn];
queue<int>q;
int lev[maxn];

void bfs(int node)
{
    if(!vis[node])
    {
        lev[node]=0;
        q.push(node);
        vis[node]=true;
        while(!q.empty())
        {
            int fr=q.front();
            q.pop();
            for(int i=0; i<adj[fr].size(); ++i)
            {
                if(!vis[adj[fr][i]])
                {
                    lev[adj[fr][i]]=lev[fr]+1;
                    vis[adj[fr][i]]=true;
                    q.push(adj[fr][i]);
                }
            }
        }
    }
}
int main()
{
    int n,e,node;
    cin>>n>>e;
    for(int i=0; i<e; ++i)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cin>>node;
    return 0;
}
/*
12 11
1 2
1 3
2 4
2 5
5 6
6 7
3 8
3 10
8 9
10 11
11 12
*/
