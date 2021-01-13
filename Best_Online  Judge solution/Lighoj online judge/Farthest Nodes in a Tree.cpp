/*
#include<bits/stdc++.h>
using namespace std;
const  int mAx = 1000000000;
vector<int>edge[31000];
vector<int>cost[31000];
int label_cost[31000];
int node;
void call_BFS(int src)
{
    queue<int>Q;
    for(int i=0; i<node+1; i++){
        label_cost[i] = mAx;
    }
    label_cost[src] = 0;
    Q.push(src);
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i=0; i<edge[u].size(); i++){
            int v = edge[u][i];
            if(label_cost[v] > cost[u][i]+label_cost[u]){
                label_cost[v]= cost[u][i]+label_cost[u];
                Q.push(v);
               }
          }
     }
}
int main()
{
    int tst,j = 1;
    cin>>tst;
    while(tst--){
        cin>>node;
        for(int i=0; i<node-1; i++){
            int u,v,w;
            cin>>u>>v>>w;
            edge[u].push_back(v);
            edge[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);
        }
        int mx = 0,source = 0;
        call_BFS(source);
        for(int i=0; i<node; i++){
            if(mx<=label_cost[i]){
                mx = label_cost[i];
                source = i;
            }
        }
        mx = 0;
        call_BFS(source);
         for(int i=0; i<node; i++){
            if(mx<=label_cost[i]){
                 mx = label_cost[i];
            }
        }
        cout<<"Case "<<j++<<": "<<mx<<endl;
        for(int i=0; i<=31000; i++){
            edge[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
const int al= 300000;
const int inf = 1000000000;
vector<int>Adj[al];
vector<int>Cost[al];
int node;
int vis[al];
int Cost_label[al];
void call_BFS(int src)
{
    for(int i=0; i<node+1; i++){
        Cost_label[i] = inf;
    }
    for(int i=0; i<node+1; i++){
       vis[i] = 0;
    }
    queue<int>Q;
    vis[src] = 1;
    Q.push(src);
    Cost_label[src] = 0;
    while(!Q.empty()){
        int u = Q.front();
        Q.pop();
        for(int i=0; i<Adj[u].size(); i++){
            int v = Adj[u][i];
            if(!vis[v]){
                vis[v] = 1;
                Cost_label[v] = Cost_label[u] + Cost[u][i];
                Q.push(v);
            }
        }
    }
}
int main()
{
    int tst,Case = 1;
    cin>>tst;
    while(tst--){
        cin>>node;
        for(int i = 0; i<node-1; i++){
            int u,v,w;
            cin>>u>>v>>w;
            Adj[u].push_back(v);
            Adj[v].push_back(u);
            Cost[u].push_back(w);
            Cost[v].push_back(w);
        }
        int mx = 0,source = 0;
        call_BFS(source);
        for(int i=0; i<node; i++){
            if(mx<=Cost_label[i]){
                mx = Cost_label[i];
              // cout<<"mx = "<<mx<<"  source = "<<source<<endl;
                source = i;
            }
        }
        mx = 0;
        call_BFS(source);
        for(int i=0; i<node; i++){
            if(mx<=Cost_label[i]){
                mx = Cost_label[i];
            }
        }
        cout<<"Case "<<Case++<<": "<<mx<<endl;
        for(int i=0; i<al; i++){
            Adj[i].clear();
            Cost[i].clear();
        }
    }
    return 0;
}
