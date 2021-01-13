#include <bits/stdc++.h>

const int SIZ = 105;
int N; // number of students
int parent[SIZ*2];
bool vis[SIZ*2];
vector<int>graph[SIZ];

bool dfs(int u)
{
    if(vis[u] == 1) return 0;
    vis[u] = 1;
    for(int i=0; i<(int)graph[u].size(); i++)
    {
        int v = graph[u][i];
        if(parent[v] == -1 || dfs(parent[v]))
        {
            parent[v] = u;
            return 1;
        }
    }
    return 0;
}
 
int hungary(void)
{
    memset(parent, -1, sizeof parent);
    int ret = 0;
    for(int i=0; i<N; i++)
    {
        mem(vis, 0);
        ret += dfs(i);
    }
    return ret;
}
 
int main()
{
    int test;
    sf1(test);
    while(test--)
    {
        read();
        int ans = hungary();
        pf("Case %d: %d\n",cases++,ans);
    }
    return 0;
}


