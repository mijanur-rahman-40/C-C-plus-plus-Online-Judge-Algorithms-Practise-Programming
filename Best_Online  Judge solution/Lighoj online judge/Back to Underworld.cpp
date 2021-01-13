
#include<bits/stdc++.h>
using namespace std;
vector<int>Adj[100001];
int visited[100001];
int edge;
int bfs(int root)
{
	queue<int> q;
	q.push(root);int ma = 0;
	visited[root] = 1;int coun1 = 1;
        int coun2 = 0;
	while(!q.empty()){
		int u=q.front();
		q.pop();

        int flag = 0;
		for(int i=0;i<Adj[u].size();i++){
			if(visited[Adj[u][i]] == 0)
			{
				q.push(Adj[u][i]);
				visited[Adj[u][i]]=1;

				if(flag == 0){
                        coun2++;
                        flag = 1;
				}
				else
                    coun1++;
				//cout<<Adj[u][i]<<endl;
				ma = max(coun2,coun1);
			}
		}
	}
	return ma;
}

int main()
{
	int tst,j=1;
	scanf("%d",&tst);
	while(tst--){
	cin>>edge;
	int temp,flag = 0;
	 memset(visited,0,sizeof(visited));
	for(int i=0;i<edge;i++){
		int u,v;
		cin>>u>>v;
		if(!flag){
                   temp = u;
                   flag = 1;
                }
		Adj[u].push_back(v);
		Adj[v].push_back(u);
	}
       cout<<"Case "<<j++<<": "<<bfs(temp)<<endl;
       for(int i=0; i<edge; i++){
            Adj[i].clear();
        }
	}
return 0;
}
