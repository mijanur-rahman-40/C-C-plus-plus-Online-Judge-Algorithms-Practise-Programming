
#include<bits/stdc++.h>
using namespace std;
map<int,int>vis;
int bfs(map<int,vector<int> >Adj,int root,int TTL){
     queue<int>Q;
     Q.push(root);
     vis[root]=0;  int coun=0;
     while(!Q.empty()){
          int u=Q.front();
          Q.pop();
          for(int i=0;i<Adj[u].size();i++){
               int top=Adj[u][i];
               if(!vis.count(top)){
               vis[top]=vis[u]+1;
          Q.push(top);
          if(vis[top]>TTL)
               coun++;
          }
       }
     }
     return coun;
}
int main()
{
     int edge,j=1;
     while(scanf("%d",&edge) && edge){
          map<int,vector<int> >Adj;
          int a,b;
          for(int i=0;i<edge;i++){
          scanf("%d%d",&a,&b);
           Adj[a].push_back(b);
           Adj[b].push_back(a);
          }
           int root,TTL;
           while(scanf("%d%d",&root,&TTL)==2){
                if(root==0 && TTL==0)
                    break;
                    int c=bfs(Adj,root,TTL)+Adj.size()-vis.size();
printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",j++,c,root,TTL);
       vis.clear();
           }
           Adj.clear();
}
return 0;
}

/*
16
10 15
 15 20
  20 25
   10 30
    30 47
     47 50
      25 45
       45 65

15 35
 35 55
  20 40
   50 55
    35 40
     55 60
      40 60
       60 65


       1 2
        2 7
        1 3
        3 4
        3 5
        5 10
         5 11

4 6
7 6
7 8
7 9
8 9
8 6
6 11
*/

