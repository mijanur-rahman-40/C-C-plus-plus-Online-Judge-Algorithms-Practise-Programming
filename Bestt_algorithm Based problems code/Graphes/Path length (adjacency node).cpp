#include<bits/stdc++.h>
using namespace std;
     int n,e;
      vector<int>graph[30];
      bool vis[30];
      int dis[30];
      void read()
      {
          int u,v;
          char cu,cv;
          scanf("%d",&n);
          scanf("%d",&e);
          for(int i=0;i<e;i++){
            scanf("%d%d",&cu,&cv);
            u=cu-'A';
            v=cv-'A';
            graph[u].push_back(v);
            graph[v].push_back(u);

          }
          return;
      }
      void bfs()
      {
          queue<int>Q;
          char ch;
          scanf("%c",&ch);
          int s=ch-'A';
          Q.push(s);
          vis[s]=true;
          while(!Q.empty()){
            int u=Q.front();
            Q.pop();
            for(int i=0;i<(int)graph[u].size();i++){
                int v=graph[u][i];
                if(vis[v]==false){
                    vis[v]=dis[u]+1;
                    Q.push(v);                }
            }
          }
      for(int i=0;i<n;i++){
        if(vis[i]){
           printf("(%c %d)\n",i+'A',dis[i]);
           }
      }
      return;
      }
      int main()
{
    read();
    bfs();
    return 0;
}
