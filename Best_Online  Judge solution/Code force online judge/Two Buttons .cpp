Code a problem ase

#include<bits/stdc++.h>
using namespace std;
/*
inline int in()
{
    int res=0;char c;
    while((c=getchar())<'0' || c>'9');
    while(c>='0' && c<='9')res=res*10+c-'0',c=getchar();
    return res;
}
*/
int vis[10000]={0};
void bfs(int n,int m)
{
    queue<int> q;
    q.push(n);
    vis[n]=0;
    while(!q.empty()){
        int now=q.front();
        q.pop();
        int tmp=now-1;
        if(tmp>0 && vis[tmp]==inf)
        {
            vis[tmp]=vis[now]+1;
            if(tmp==m)
               return;
            q.push(tmp);
        }
        tmp=now*2;
        if(tmp>0 && vis[tmp]==inf)
        {
            vis[tmp]=vis[now]+1;
            if(tmp==m)return;
            q.push(tmp);
        }

    }
}
int main()
{
    int n=in(),m=in();
    mem(vis,inf);
    bfs(n,m);
    cout<<vis[m];

    return 0;
}
