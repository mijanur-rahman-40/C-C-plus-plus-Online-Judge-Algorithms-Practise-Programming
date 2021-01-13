#include<bits/stdc++.h>
#define maxn 1055
using namespace std;

bool vis[maxn];
vector<int> g[maxn];



void dfs(int u)
{
    vis[u]=true;
    for(int i=0;i<(int)g[u].size();i++)
    {
        int v=g[u][i];
        if(!vis[v])
        {
            dfs(v);
        }
    }
}
int main()
{
    int n,e,u;
    cin>>n>>e;
    for(int i=0;i<e;++i)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    cin>>u;
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
