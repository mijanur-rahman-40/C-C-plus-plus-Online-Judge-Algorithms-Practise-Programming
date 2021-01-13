
#include<bits/stdc++.h>
using namespace std;
int vis[30];
vector<int>adj[30];
void bfs(int root)
{
	queue<int> q;
	q.push(root);
	vis[root] = 1;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int i=0; i<adj[u].size(); i++){
            int v = adj[u][i];
			if(!vis[v])
			{
			    vis[v] = 1;
				q.push(v);
			}
		}
	}
}
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        scanf("\n");
        char str[3];
        gets(str);
        memset(vis,0,sizeof(vis));
        int n = str[0]-'A';
        while(gets(str) && str[0])
        {
            adj[str[0]-'A'].push_back(str[1]-'A');
            adj[str[1]-'A'].push_back(str[0]-'A');
        }

        int coun=0;
        for(int i=0; i<=n; i++){
            if(!vis[i]){
                bfs(i);
                 coun++;
         }
    }
    for(int i=0; i<=n; i++){
           adj[i].clear();
        }
        cout<<coun<<endl;
        if(tst) cout<<endl;
    }
    return 0;
}
