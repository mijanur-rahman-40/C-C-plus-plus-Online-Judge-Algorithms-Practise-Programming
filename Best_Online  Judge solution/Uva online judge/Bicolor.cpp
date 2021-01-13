
/*
3
3
0 1
1 2
2 0
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node,edge;
    while(cin>>node)
    {
        if(node == 0){
           break;
        }
        cin>>edge;
        vector<int>Adj[100000];
        int color[10000];
        memset(color,0,sizeof(color));
        for(int i=0; i<edge; i++)
        {
            int u,v;
            cin>>u>>v;
            Adj[u].push_back(v);
            Adj[v].push_back(u);
        }
        queue<int>Q;
        bool flag = false;
        color[0] = 1;
        Q.push(0);
        while(!Q.empty())
        {
            int u = Q.front();
            Q.pop();
            for(int i=0; i<Adj[u].size(); i++){
                if(color[Adj[u][i]] == 0)
                {
                    if(color[u] == 1)
                     color[Adj[u][i]] = 2;
                    else
                    color[Adj[u][i]] = 1;
                     Q.push(Adj[u][i]);
                }
                else
                {
                    if(color[Adj[u][i]] == color[u]){
                        flag = true;
                        break;
                    }
                }
            }
            if(flag)
                break;
        }
        if(flag)
        printf("NOT BICOLORABLE.\n");
        else
        printf("BICOLORABLE.\n");
    }
    return 0;
}











