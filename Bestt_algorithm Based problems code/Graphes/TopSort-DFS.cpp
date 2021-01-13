
#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> graph[110], store;
bool color[110];

void read()
{
    for(int i=1; i<=110; i++) graph[i].clear();
    int u, v;
    while(m--)
    {
        scanf("%d %d" ,&u, &v);
        graph[u].push_back(v);
    }
    return ;
}


void dfs(int u)
{
    //printf("now at, u: %d\n", u);getch();
    color[u] = true;
    for(int i=0; i<(int)graph[u].size(); i++)
    {
        int v = graph[u][i];
        if(color[v]==0)
            dfs(v);
    }
    store.push_back(u);
    printf("pushed, u: %d\n", u);
    return ;
}

int main()
{
    int test_cases;
    while(~scanf("%d %d", &n, &m) && (n|m))
    {
        read();
        memset(color, 0, sizeof color);
        store.clear();
        for(int i=1; i<=n; i++)
        {
            if(color[i]==0)
            {
                dfs(i);
            }
        }
        if(store.size())
            printf("%d", store[store.size()-1]);
        for(int i = store.size()-2; i>=0; i--)
            printf(" %d", store[i]);
        puts("");
    }
    return 0;
}

/*
7 10
1 3
1 4
3 6
4 6
4 3
2 4
2 5
5 4
4 7
5 7



ans 2 5 1 4 7 3 6




#include <cstdio>
#include <vector>
#include <stack>

using namespace std;

void visit(vector<vector<int> > &adj, vector<int> &list,
        vector<bool> &seen, int u) {
    for (int i = 0; i < adj[u].size(); i++) {
        if (!seen[adj[u][i]]) visit(adj, list, seen, adj[u][i]);
    }
    seen[u] = true;
    list.insert(list.begin(), u + 1);
}

int main() {
    int n, m, u, v;
    vector<vector<int> > adj;
    for (;;) {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) break;
        adj.clear();
        adj.resize(n);
        for (int i = 0; i < m; i++) {
            scanf("%d %d", &u, &v);
            adj[u - 1].push_back(v - 1);
        }

        // Topological sort.
        vector<int> list;
        vector<bool> seen;
        seen.clear();
        seen.resize(n);
        for (int i = 0; i < n; i++) seen[i] = false;
        for (int i = 0; i < n; i++) {
            if (!seen[i]) {
                visit(adj, list, seen, i);
            }
        }

        printf("%d", list[0]);
        for (int i = 1; i < list.size(); i++)
            printf(" %d", list[i]);
        printf("\n");
    }
}
*/
